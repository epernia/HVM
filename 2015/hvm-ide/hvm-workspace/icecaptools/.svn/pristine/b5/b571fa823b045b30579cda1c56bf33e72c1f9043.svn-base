/**************************************************************************
 * File name  : TestSCJSleepingQueue1.java
 * 
 * This code is available under the license:
 * Creative Commons, http://creativecommons.org/licenses/by-nc-nd/3.0/
 * It is free for non-commercial use. 
 * 
 * VIA University College, Horsens, Denmark, 2012
 * Hans Soendergaard, hso@viauc.dk
 * 
 * Description: 
 * 
 * Revision history:
 *   date   init  comment
 *
 *************************************************************************/

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
public class TestSCJSleepingQueue1 {
    private static class MyAperiodicEvh extends AperiodicEventHandler {
        Mission mission;

        public MyAperiodicEvh(PriorityParameters priority, AperiodicParameters release, long memSize, // size
                                                                                                      // of
                                                                                                      // private
                                                                                                      // memory
                Mission m) {
            super(priority, release, storageParameters);
            this.mission = m;
        }

        public void handleAsyncEvent() {
            mission.requestTermination();
        }
    }

    private static class MyPeriodicEvh extends PeriodicEventHandler {
        AperiodicEventHandler aevh;
        int count = 0;

        public MyPeriodicEvh(PriorityParameters priority, PeriodicParameters periodicParameters, long memSize, // size
                                                                                                               // of
                                                                                                               // private
                                                                                                               // mem
                AperiodicEventHandler aevh) {
            super(priority, periodicParameters, storageParameters);
            this.aevh = aevh;
        }

        public void handleAsyncEvent() {
            count++;
            for (int i = 0; i < 2; i++) {
                new Integer(i);
            }

            if (count % 3 == 2)
                aevh.release();
        }
    }

    private static class MyPeriodicEvh1 extends PeriodicEventHandler {
        public MyPeriodicEvh1(PriorityParameters priority, PeriodicParameters periodicParameters, long memSize) // size
                                                                                                                // of
                                                                                                                // private
                                                                                                                // mem
        {
            super(priority, periodicParameters, storageParameters);
        }

        public void handleAsyncEvent() {
            for (int i = 0; i < 3; i++) {
                new Integer(i);
            }
        }
    }

    private static class MyMission0 extends Mission {
        public void initialize() {
            AperiodicEventHandler aevh = new MyAperiodicEvh(new PriorityParameters(Priorities.PR97), new AperiodicParameters(new RelativeTime(50, 0, Clock.getRealtimeClock()), null), Const.PRIVATE_MEM_SIZE, this);
            aevh.register();

            new MyPeriodicEvh(new PriorityParameters(Priorities.PR98), new PeriodicParameters(new RelativeTime(50, 0, Clock.getRealtimeClock()), // start
                    new RelativeTime(80, 0, Clock.getRealtimeClock())), // period
                    Const.PRIVATE_MEM_SIZE, aevh).register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }
    }

    private static class MyMission1 extends Mission {
        public void initialize() {
            AperiodicEventHandler aevh = new MyAperiodicEvh(new PriorityParameters(Priorities.PR96), new AperiodicParameters(new RelativeTime(100, 0, Clock.getRealtimeClock()), null), Const.PRIVATE_MEM_SIZE, this);
            aevh.register();

            new MyPeriodicEvh(new PriorityParameters(Priorities.PR97), new PeriodicParameters(new RelativeTime(0, 0, Clock.getRealtimeClock()), // start
                    new RelativeTime(50, 0, Clock.getRealtimeClock())), // period
                    Const.PRIVATE_MEM_SIZE, aevh).register();

            new MyPeriodicEvh1(new PriorityParameters(Priorities.PR98), new PeriodicParameters(new RelativeTime(70, 0, Clock.getRealtimeClock()), // start
                    new RelativeTime(30, 0, Clock.getRealtimeClock())), // period
                    Const.PRIVATE_MEM_SIZE).register();
        }

        public long missionMemorySize() {
            return Const.MISSION_MEM_SIZE;
        }
    }

    private static class MyApp implements Safelet {
        public static int count = 0;

        public MissionSequencer getSequencer() {
            return new MySequencer();
        }

        public long immortalMemorySize() {
            return Const.IMMORTAL_MEM_SIZE;
        }

        private class MySequencer extends MissionSequencer {
            private Mission[] missions;
            private int active = 0;

            private Mission miss;

            MySequencer() {
                super(new PriorityParameters(Priorities.PR95), storageParameters); // mission
                                                                                   // memory
                                                                                   // size
                missions = new Mission[2];
                missions[0] = new MyMission0();
                missions[1] = new MyMission1();

                miss = missions[0];
            }

            public Mission getNextMission() {
                MyApp.count++;
                if (MyApp.count % 1 == 0) // or MyApp.count % 10, etc.
                {
                    devices.Console.println("MS " + MyApp.count);
                }
                if (missions[active].terminationPending() && MyApp.count > 4) {
                    devices.Console.println("MySeq.getNextMission: null");
                    return null;
                } else {
                    active = (active + 1) % missions.length;
                    miss = missions[active];
                    return miss;
                }
            }
        }
    }

    static StorageParameters storageParameters;

    public static void main(String[] args) {
        Const.BACKING_STORE_SIZE = Const.BACKING_STORE_SIZE_DEFAULT;
        Const.IMMORTAL_MEM_SIZE = Const.IMMORTAL_MEM_SIZE_DEFAULT;
        Const.MISSION_MEM_SIZE = Const.MISSION_MEM_SIZE_DEFAULT;
        Const.PRIVATE_MEM_SIZE = Const.PRIVATE_MEM_SIZE_DEFAULT;

        storageParameters =
          new StorageParameters(Const.BACKING_STORE_SIZE, 
                  new long[] { Const.HANDLER_STACK_SIZE }, 
                  Const.PRIVATE_MEM_SIZE, Const.IMMORTAL_MEM_SIZE, Const.MISSION_MEM_SIZE);

        devices.Console.println("\n***** Sleeping queue main.begin ************");
        // executes in heap memory
        new Launcher(new MyApp(), 1);
        devices.Console.println("***** Sleeping queue main.end **************");
        args = null;
    }
}
