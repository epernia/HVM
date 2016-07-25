package test.icecapvm.minitests;

import javax.realtime.Clock;
import javax.realtime.PeriodicParameters;
import javax.realtime.PriorityParameters;
import javax.realtime.RelativeTime;
import javax.safetycritical.CyclicExecutive;
import javax.safetycritical.CyclicSchedule;
import javax.safetycritical.Frame;
import javax.safetycritical.Launcher;
import javax.safetycritical.MissionSequencer;
import javax.safetycritical.PeriodicEventHandler;
import javax.safetycritical.Safelet;
import javax.safetycritical.StorageParameters;
import javax.scj.util.Const;
import javax.scj.util.Priorities;

public class TestSCJCyclicSchedule4 {

    public static class MyCyclicSchedule {
        static CyclicSchedule generate(/* CyclicExecutive cyclicExec, */
        PeriodicEventHandler[] handlers) {
            Frame[] frames = new Frame[2];
            PeriodicEventHandler[] frame0 = new PeriodicEventHandler[2];
            PeriodicEventHandler[] frame1 = new PeriodicEventHandler[1];

            RelativeTime frameDuration = new RelativeTime(200, 0, Clock.getRealtimeClock());

            frame0[0] = handlers[0];
            frame0[1] = handlers[1];

            frame1[0] = handlers[0];

            frames[0] = new Frame(frameDuration, frame0);
            frames[1] = new Frame(frameDuration, frame1);

            return new CyclicSchedule(frames);
        }
    }

    public static class MyPeriodicEvh extends PeriodicEventHandler {
        int n;
        int count = 0;

        MissionSequencer<MyMission> missSeq;

        protected MyPeriodicEvh(PriorityParameters priority, 
                PeriodicParameters periodic, 
                StorageParameters storageParameters,                
                int n, MissionSequencer<MyMission> missSeq) {
            super(priority, periodic, storageParameters);
            this.n = n;
            this.missSeq = missSeq;
        }

        public void handleAsyncEvent() {
            count++;
            devices.Console.println("  *** MyPEvh:" + n + "; " + count);

            if (count % 7 == 5 && n == 4)
                missSeq.requestSequenceTermination();
        }
    }

    public static class MyMission extends CyclicExecutive {
        MissionSequencer<MyMission> missSeq;

        public MyMission(MissionSequencer<MyMission> missSeq) {
            this.missSeq = missSeq;
        }

        public void initialize() {
            PeriodicEventHandler pevh1 = new MyPeriodicEvh(new PriorityParameters(Priorities.MIN_PRIORITY), new PeriodicParameters(new RelativeTime(), // start
                    new RelativeTime(200, 0)), // period
                    storageParameters,
                    2, // used in handleAsyncEvent
                    missSeq);
            pevh1.register();

            PeriodicEventHandler pevh2 = new MyPeriodicEvh(new PriorityParameters(Priorities.MIN_PRIORITY), new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), // start
                    new RelativeTime(400, 0, Clock.getRealtimeClock())), // period
                    storageParameters,
                    4, // used in handleAsyncEvent
                    missSeq);
            pevh2.register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }

        public CyclicSchedule getSchedule(PeriodicEventHandler[] handlers) {
            devices.Console.println("  *** MyMission: getSchedule");
            return MyCyclicSchedule.generate(/* this, */handlers);
        }
    }

    public static class MySequencer extends MissionSequencer<MyMission> {
        private MyMission mission;

        public MySequencer() {
            super(new PriorityParameters(Priorities.PR95), // lowest priority
                    storageParameters); // mission
                                                                                                                   // memory
                                                                                                                   // size

            mission = new MyMission(this);
        }

        public MyMission getNextMission() {
            if (mission.terminationPending()) {
                devices.Console.println("\n** MySequencer.getNextMission: null");
                return null;
            } else {
                devices.Console.println("\n** MySequencer.getNextMission");
                return mission;
            }
        }
    }

    public static class MyApp implements Safelet<MyMission> {
        public MissionSequencer<MyMission> getSequencer() {
            devices.Console.println("** MyApp.getSequencer");
            return new MySequencer();
        }

        public long immortalMemorySize() {
            return Const.IMMORTAL_MEM_SIZE;
        }

    }

    public static StorageParameters storageParameters;

    public static void main(String[] args) {
        Const.BACKING_STORE_SIZE = Const.BACKING_STORE_SIZE_DEFAULT;
        Const.IMMORTAL_MEM_SIZE = Const.IMMORTAL_MEM_SIZE_DEFAULT;
        Const.MISSION_MEM_SIZE = Const.MISSION_MEM_SIZE_DEFAULT;
        Const.PRIVATE_MEM_SIZE = Const.PRIVATE_MEM_SIZE_DEFAULT;
        Const.HANDLER_STACK_SIZE = 16 * 1024;
        
        storageParameters = 
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                new long[] { Const.HANDLER_STACK_SIZE }, 
                Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        
        devices.Console.println("\n****** Cyc 2 main.begin *********");
        // executes in heap memory
        new Launcher(new MyApp(), 0);
        devices.Console.println("****** Cyc 2 main.end *********");
        args = null;
    }

}
