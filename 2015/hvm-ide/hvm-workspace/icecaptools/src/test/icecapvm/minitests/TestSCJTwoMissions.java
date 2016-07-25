package test.icecapvm.minitests;

import javax.realtime.AperiodicParameters;
import javax.realtime.Clock;
import javax.realtime.PeriodicParameters;
import javax.realtime.PriorityParameters;
import javax.realtime.RelativeTime;
import javax.safetycritical.AperiodicEventHandler;
import javax.safetycritical.Launcher;
import javax.safetycritical.Mission;
import javax.safetycritical.MissionSequencer;
import javax.safetycritical.PeriodicEventHandler;
import javax.safetycritical.Safelet;
import javax.safetycritical.StorageParameters;
import javax.scj.util.Const;
import javax.scj.util.Priorities;

@SuppressWarnings("rawtypes")
public class TestSCJTwoMissions {

    private static class MyPeriodicEvh extends PeriodicEventHandler {
        int n;
        AperiodicEventHandler aevh;
        int count = 0;

        public MyPeriodicEvh(PriorityParameters priority, PeriodicParameters periodicParameters, long memSize, // size
                                                                                                               // of
                                                                                                               // private
                                                                                                               // memory
                int n, AperiodicEventHandler aevh) {
            super(priority, periodicParameters, storageParameters);
            this.n = n;
            this.aevh = aevh;
        }

        public void handleAsyncEvent() {
            count++;
            for (int i = 0; i < n; i++) {
                new Integer(count);
            }

            if (count % 3 == 2)
                aevh.release();

            // devices.Console.println("   ** PeriodicEvH.handleAsyncEvent: Pevh no: "
            // + handlerNo + "; count: " + count);
        }
    }

    private static class MyAperiodicEvh extends AperiodicEventHandler {
        int n;
        int count = 0;
        Mission mission;

        public MyAperiodicEvh(PriorityParameters priority, AperiodicParameters release, long memSize, // size
                                                                                                      // of
                                                                                                      // private
                                                                                                      // memory
                int n, Mission m) {
            super(priority, release, storageParameters);
            this.n = n;
            this.mission = m;
        }

        public void handleAsyncEvent() {
            count++;
            for (int i = 0; i < n; i++) {
                new Integer(count);
            }
            // devices.Console.println("   ** Apevh.handleAsyncEvent no: " + n +
            // "; count: " + count);
            mission.requestTermination();
        }
    }

    private static class MyMission1 extends Mission {
        public void initialize() {

            AperiodicEventHandler aevh = new MyAperiodicEvh(new PriorityParameters(Priorities.PR97), new AperiodicParameters(new RelativeTime(300, 0, Clock.getRealtimeClock()), null), Const.PRIVATE_MEM_SIZE, 3, this);
            aevh.register();

            PeriodicEventHandler pevh = new MyPeriodicEvh(new PriorityParameters(Priorities.PR98), new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), new RelativeTime(200, 0, Clock.getRealtimeClock())), Const.PRIVATE_MEM_SIZE, 4, aevh);
            pevh.register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }
    }

    private static class MyMission0 extends Mission {
        public void initialize() {

            AperiodicEventHandler aevh = new MyAperiodicEvh(new PriorityParameters(Priorities.PR97), new AperiodicParameters(new RelativeTime(300, 0, Clock.getRealtimeClock()), null), Const.PRIVATE_MEM_SIZE, 1, this);
            aevh.register();

            PeriodicEventHandler pevh = new MyPeriodicEvh(new PriorityParameters(Priorities.PR98), new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), new RelativeTime(200, 0, Clock.getRealtimeClock())), Const.PRIVATE_MEM_SIZE, 2, aevh);
            pevh.register();
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
            private Mission[] mission;

            private int active = 0;

            private byte missionCount;

            MySequencer() {
                super(new PriorityParameters(Priorities.PR95), storageParameters); // mission
                                                                                                                                                              // memory
                                                                                                                                                              // size
                mission = new Mission[2];
                mission[0] = new MyMission0();
                mission[1] = new MyMission1();
                missionCount = 0;
            }

            public Mission getNextMission() {
                if (missionCount < 4) {
                    // devices.Console.println("\n** MyMissionSequencer.getNextMission: === MyMission "
                    // + active + " ===");
                    devices.Console.println("\n MyMS " + active);
                    Mission miss = mission[active];
                    active = (active + 1) % mission.length;
                    missionCount++;
                    return miss;
                } else {
                    return null;
                }
            }
        }
    }

    static StorageParameters storageParameters;

    public static void main(String[] args) {
        storageParameters = 
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                new long[] { Const.HANDLER_STACK_SIZE }, 
                Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        devices.Console.println("\n********** main.begin ******************");
        // executes in heap memory
        new Launcher(new MyApp(), 1);
        devices.Console.println("********* main.end ************************");
        args = null;
    }
}
