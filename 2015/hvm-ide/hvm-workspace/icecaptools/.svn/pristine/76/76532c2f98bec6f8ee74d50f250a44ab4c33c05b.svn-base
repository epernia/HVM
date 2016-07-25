package test.icecapvm.minitests;

import javax.realtime.Clock;
import javax.realtime.PeriodicParameters;
import javax.realtime.PriorityParameters;
import javax.realtime.RelativeTime;
import javax.safetycritical.Frame;
import javax.safetycritical.CyclicExecutive;
import javax.safetycritical.CyclicSchedule;
import javax.safetycritical.Launcher;
import javax.safetycritical.Mission;
import javax.safetycritical.MissionSequencer;
import javax.safetycritical.PeriodicEventHandler;
import javax.safetycritical.Safelet;
import javax.safetycritical.StorageParameters;
import javax.scj.util.Const;
import javax.scj.util.Priorities;

public class TestSCJCyclicSchedule3Tick {
    private static class MyCyclicSchedule {
        static CyclicSchedule generate0(CyclicExecutive cyclicExec, PeriodicEventHandler[] handlers) {
            Frame[] frames = new Frame[1];

            PeriodicEventHandler[] frame0handlers = new PeriodicEventHandler[1];

            frame0handlers[0] = handlers[0];

            RelativeTime frameDuration = new RelativeTime(500, 0, Clock.getRealtimeClock());

            frames[0] = new Frame(frameDuration, frame0handlers);

            return new CyclicSchedule(frames);
        }

    }

    private static class MyPeriodicEvh extends PeriodicEventHandler {
        Mission mission;
        int count = 0;

        public MyPeriodicEvh(PriorityParameters priority, PeriodicParameters periodicParameters, long memSize, // size
                                                                                                               // of
                                                                                                               // private
                                                                                                               // mem
                Mission mission) {
            super(priority, periodicParameters, storageParameters);
            this.mission = mission;
        }

        public void handleAsyncEvent() {
            count++;
            devices.Console.println("tick!");
            if (count == 10) {
                mission.requestTermination();
            }
        }
    }

    private static class MyMission0 extends CyclicExecutive {
        public void initialize() {
            new MyPeriodicEvh(new PriorityParameters(Priorities.MIN_PRIORITY), new PeriodicParameters(new RelativeTime(0, 0, Clock.getRealtimeClock()), new RelativeTime(500, 0, Clock.getRealtimeClock())), Const.PRIVATE_MEM_SIZE, this).register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }

        public CyclicSchedule getSchedule(PeriodicEventHandler[] handlers) {
            return MyCyclicSchedule.generate0(this, handlers);
        }
    }

    private static class MyApp implements Safelet<Mission> {

        public MissionSequencer<Mission> getSequencer() {
            devices.Console.println("** MyApp.getSequencer");
            return new MySequencer();
        }

        public long immortalMemorySize() {
            return Const.IMMORTAL_MEM_SIZE;
        }

        private static class MySequencer extends MissionSequencer<Mission> {
            private Mission[] missions;
            private boolean started;

            MySequencer() {
                super(new PriorityParameters(Priorities.PR95), storageParameters); // mission
                                                                                                                                                              // memory
                                                                                                                                                              // size
                missions = new Mission[1];
                missions[0] = new MyMission0();
                started = false;
            }

            public Mission getNextMission() {
                if (!started) {
                    started = true;
                    return missions[0];
                } else {
                    return null;
                }
            }
        }
    }

    public static StorageParameters storageParameters;

    public static void main(String[] args) {
        Const.BACKING_STORE_SIZE = 32 * 1000;
        Const.IMMORTAL_MEM_SIZE = 27 * 1000;
        Const.MISSION_MEM_SIZE = 1 * 1000;
        Const.PRIVATE_MEM_SIZE = 1 * 1000;

        storageParameters = 
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                new long[] { Const.HANDLER_STACK_SIZE }, 
                Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        devices.Console.println("\n****** Cyc main.begin *********");
        // executes in heap memory
        new Launcher(new MyApp(), 0);
        devices.Console.println("****** Cyc main.end *********");

        args = null;
    }
}
