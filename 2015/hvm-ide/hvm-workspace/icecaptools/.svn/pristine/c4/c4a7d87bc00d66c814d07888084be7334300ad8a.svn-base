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

import vm.Address32Bit;
import vm.HardwareObject;

public class TestSCJSimpleLowMemory {

    private static class Light extends HardwareObject {

        public Light(int address) {
            super(new Address32Bit(address));
        }

        public void on(int colour) // 0 = green; 1 = red
        {
            if (colour == 0) {
                devices.Console.println("g on"); // green on
            } else
                devices.Console.println("r on"); // red on
        }

        public void off(int colour) {
            if (colour == 0) {
                devices.Console.println("g off"); // green off
            } else
                devices.Console.println("r off"); // red off
        }
    }

    private static class MyAperiodicEvh extends AperiodicEventHandler {
        Light light;
        MissionSequencer<MyMission> missSeq;

        public MyAperiodicEvh(PriorityParameters priority, AperiodicParameters release, long memSize, // size
                                                                                                      // of
                                                                                                      // private
                                                                                                      // memory
                Light light, MissionSequencer<MyMission> missSeq) {
            super(priority, release, storageParameters);
            this.light = light;
            this.missSeq = missSeq;
        }

        public void handleAsyncEvent() {
            missSeq.requestSequenceTermination();
            devices.Console.println("Ap Term");
            light.on(1);
        }
    }

    private static class MyPeriodicEvh extends PeriodicEventHandler {
        Light light;
        AperiodicEventHandler aevh;

        int count = 0;

        protected MyPeriodicEvh(PriorityParameters priority, PeriodicParameters periodic, long memSize, // size
                                                                                                        // of
                                                                                                        // private
                                                                                                        // mem
                Light light, AperiodicEventHandler aevh) {
            super(priority, periodic, storageParameters);
            this.light = light;
            this.aevh = aevh;
        }

        public void handleAsyncEvent() {
            light.on(0);
            count++;

            devices.Console.println("MyPEvh");

            if (count % 4 == 3)
                aevh.release();

            light.off(0);
        }
    }

    private static class MyMission extends Mission {
        MissionSequencer<MyMission> missSeq;

        public MyMission(MissionSequencer<MyMission> missSeq) {
            this.missSeq = missSeq;
        }

        public void initialize() {
            int address = 123456;
            Light light = new Light(address);

            AperiodicEventHandler aevh = new MyAperiodicEvh(new PriorityParameters(Priorities.PR98), new AperiodicParameters(new RelativeTime(500, 0), null), Const.PRIVATE_MEM_SIZE, light, missSeq);
            aevh.register();

            PeriodicEventHandler pevh1 = new MyPeriodicEvh(new PriorityParameters(Priorities.PR97), new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()), // start
                    new RelativeTime(2000, 0, Clock.getRealtimeClock())), // period
                    Const.PRIVATE_MEM_SIZE, // size of private mem
                    light, aevh); // used in pevh.handleAsyncEvent
            pevh1.register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }

    }

    private static class MyApp implements Safelet<MyMission> {
        public MissionSequencer<MyMission> getSequencer() {
            devices.Console.println("MyApp.getSeq");
            return new MySequencer();
        }

        public long immortalMemorySize() {
            return Const.IMMORTAL_MEM_SIZE;
        }

        private static class MySequencer extends MissionSequencer<MyMission> {
            private MyMission mission;

            MySequencer() {
                super(new PriorityParameters(Priorities.PR95), storageParameters); 

                mission = new MyMission(this);
            }

            public MyMission getNextMission() {
                if (mission.terminationPending()) {
                    devices.Console.println("MySeq.NextMiss: null");
                    return null;
                } else {
                    devices.Console.println("MySeq.NextMiss");
                    return mission;
                }
            }
        }
    }

    static StorageParameters storageParameters;

    public static void main(String[] args) {
        Const.BACKING_STORE_SIZE = 140 * 1000;
        Const.IMMORTAL_MEM_SIZE = 50 * 1000;
        Const.MISSION_MEM_SIZE = 35 * 1000;
        Const.PRIVATE_MEM_SIZE = 2 * 1000;

        storageParameters = 
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                new long[] { Const.HANDLER_STACK_SIZE }, 
                Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        devices.Console.println("begin");
        // executes in heap memory
        new Launcher(new MyApp(), 1);
        devices.Console.println("end");

        args = null;
    }
}
