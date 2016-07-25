package test.icecapvm.minitests;

import icecaptools.IcecapCompileMe;

import javax.realtime.Clock;
import javax.realtime.PeriodicParameters;
import javax.realtime.PriorityParameters;
import javax.realtime.RelativeTime;
import javax.safetycritical.Launcher;
import javax.safetycritical.Mission;
import javax.safetycritical.MissionSequencer;
import javax.safetycritical.PeriodicEventHandler;
import javax.safetycritical.Safelet;
import javax.safetycritical.StorageParameters;
import javax.scj.util.Const;
import javax.scj.util.Priorities;

@SuppressWarnings("rawtypes")
public class TestSCJPrioritySchedule0 {

    private static int testCount;

    static {
        testCount = 0;
    }

    private static class MyPeriodicEvh extends PeriodicEventHandler {
        int n;
        int count = 0;

        MissionSequencer missSeq;

        protected MyPeriodicEvh(PriorityParameters priority, 
                PeriodicParameters periodic, 
                StorageParameters storageParameters,
                int n, MissionSequencer missSeq) {
            super(priority, periodic, storageParameters);
            this.n = n;
            this.missSeq = missSeq;
        }

        @IcecapCompileMe
        public void handleAsyncEvent() {
            for (int i = 0; i < n; i++)
                new Integer(count++);

            if (n == 1) {
                testCount++;
                if (count % 5 == 3)
                    missSeq.requestSequenceTermination();
            }
        }
    }

    private static class MyMission extends Mission {
        MissionSequencer missSeq;

        public MyMission(MissionSequencer missSeq) {
            this.missSeq = missSeq;
        }

        public void initialize() {
            PeriodicEventHandler pevh1 = 
              new MyPeriodicEvh(new PriorityParameters(Priorities.PR98),                       
                    new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), // start
                    new RelativeTime(500, 0, Clock.getRealtimeClock())), // period
                    storageParameters,
                    1, // a number
                    missSeq);
            pevh1.register();

            PeriodicEventHandler pevh2 = 
              new MyPeriodicEvh(new PriorityParameters(Priorities.PR97), 
                    new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), // start
                    new RelativeTime(600, 0, Clock.getRealtimeClock())), // period
                    storageParameters,
                    2, // a number
                    null);
            pevh2.register();

            PeriodicEventHandler pevh3 = 
              new MyPeriodicEvh(new PriorityParameters(Priorities.PR96), 
                    new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), // start
                    new RelativeTime(700, 0, Clock.getRealtimeClock())), // period
                    storageParameters,
                    3, // a number
                    null);
            pevh3.register();

        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }
    }

    private static class MyApp implements Safelet {
        public MissionSequencer getSequencer() {
            return new MySequencer();
        }

        public long immortalMemorySize() {
            return Const.IMMORTAL_MEM_SIZE;
        }

        private class MySequencer extends MissionSequencer {
            private Mission mission;

            MySequencer() {
                super(new PriorityParameters(Priorities.PR95), storageParameters); 
                mission = new MyMission(this);
            }

            public Mission getNextMission() {
                if (mission.terminationPending()) {
                    return null;
                } else {
                    return mission;
                }
            }
        }
    }

    public static StorageParameters storageParameters;

    /**
     * @param args
     */
    public static void main(String[] args) {
        devices.Console.println("********** main.begin ******************");
        // executes in heap memory
        storageParameters = 
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                new long[] { Const.HANDLER_STACK_SIZE }, 
                Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        new Launcher(new MyApp(), 1);
        devices.Console.println("********* main.end ************************");
        if (testCount == 3) {
            args = null;
        }
    }

}
