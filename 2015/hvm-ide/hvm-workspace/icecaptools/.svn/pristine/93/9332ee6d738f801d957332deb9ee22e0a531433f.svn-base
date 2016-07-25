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

import vm.Memory;

public class TestSCJCyclicSchedule3LowMemory
{
  private static class MyCyclicSchedule
  {
    static CyclicSchedule generate0 (CyclicExecutive cyclicExec, 
                                    PeriodicEventHandler[] handlers)
    {
      Frame[] frames = new Frame[2];
      
      PeriodicEventHandler[] frame0 = new PeriodicEventHandler[2];
      PeriodicEventHandler[] frame1 = new PeriodicEventHandler[1];
      
      RelativeTime frameDuration = new RelativeTime (500, 0, Clock.getRealtimeClock());
      
      frame0[0] = handlers[0];
      frame0[1] = handlers[1];
      
      frame1[0] = handlers[0];
      
      frames[0] = new Frame (frameDuration, frame0);
      frames[1] = new Frame (frameDuration, frame1);
      
      return new CyclicSchedule (frames);
    }
    
    static CyclicSchedule generate1 (CyclicExecutive cyclicExec, 
        PeriodicEventHandler[] handlers)
    {
      Frame[] frames = new Frame[2];
      
      PeriodicEventHandler[] frame0 = new PeriodicEventHandler[1];
      PeriodicEventHandler[] frame1 = new PeriodicEventHandler[2];
      
      RelativeTime frameDuration = new RelativeTime (500, 0, Clock.getRealtimeClock());
      
      frame0[0] = handlers[0];
      
      frame1[0] = handlers[0];
      frame1[1] = handlers[1];
      
      frames[0] = new Frame (frameDuration, frame0);
      frames[1] = new Frame (frameDuration, frame1);
      
      return new CyclicSchedule (frames);
    }
  }

  private static class MyPeriodicEvh1 extends PeriodicEventHandler
  {  
    protected MyPeriodicEvh1 (PriorityParameters priority,
                             PeriodicParameters periodic,
                             StorageParameters storageParameters)                          
    {
      super(priority, periodic, storageParameters);
    }

    public void handleAsyncEvent() 
    { 
      devices.Console.println("MyPev1");
      new Integer(89);
    }
  }

  private static class MyPeriodicEvh extends PeriodicEventHandler
  {
    Mission mission;
    int count = 0;
    
    public MyPeriodicEvh (PriorityParameters priority,
                           PeriodicParameters periodicParameters,
                           StorageParameters storageParameters,
                           Mission mission) 
    {
      super(priority, periodicParameters, storageParameters);
      this.mission = mission;
    }

    public void handleAsyncEvent() 
    {
      count++; 
      devices.Console.println("MyPev");
      if (count == 2)
        mission.requestTermination();
    }
  }

  private static class MyMission0 extends CyclicExecutive
  {  
    public void initialize()
    {     
      new MyPeriodicEvh( 
        new PriorityParameters(Priorities.MIN_PRIORITY),
        new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()),
              new RelativeTime(500,0, Clock.getRealtimeClock())),
        storageParameters,
        this).register();  
      
      new MyPeriodicEvh1(
        new PriorityParameters(Priorities.MIN_PRIORITY),
        new PeriodicParameters(new RelativeTime (),         // start  
                               new RelativeTime (1000, 0)), // period 
        storageParameters
        ).register(); 
    }
    
    public long missionMemorySize ()
    {
      return Const.MISSION_MEM_SIZE;
    }
    
    public CyclicSchedule getSchedule (PeriodicEventHandler[] handlers)
    {
      return MyCyclicSchedule.generate0 (this, handlers);
    }
  }

  private static class MyMission1 extends CyclicExecutive
  {  
    public void initialize()
    {     
      new MyPeriodicEvh( 
        new PriorityParameters(Priorities.MIN_PRIORITY),
        new PeriodicParameters(new RelativeTime(Clock.getRealtimeClock()),
              new RelativeTime(500,0, Clock.getRealtimeClock())),
              new StorageParameters (Const.BACKING_STORE_SIZE, 
                      new long[]{ Const.HANDLER_STACK_SIZE }, 
                      0,
                      Const.IMMORTAL_MEM_SIZE,
                      Const.MISSION_MEM_SIZE),
        this).register();
      
      new MyPeriodicEvh1(
        new PriorityParameters(Priorities.MIN_PRIORITY),
        new PeriodicParameters(new RelativeTime (),         // start  
                               new RelativeTime (1000, 0)), // period 
                               new StorageParameters (Const.BACKING_STORE_SIZE, 
                                       new long[]{ Const.HANDLER_STACK_SIZE }, 
                                       10,
                                       Const.IMMORTAL_MEM_SIZE,
                                       Const.MISSION_MEM_SIZE)
        ).register(); 
    }
    
    public long missionMemorySize ()
    {
      return Const.MISSION_MEM_SIZE;
    }
    
    public CyclicSchedule getSchedule (PeriodicEventHandler[] handlers)
    {
      return MyCyclicSchedule.generate1 (this, handlers);
    }
  }

  private static class MyApp implements Safelet<Mission>
  { 
    public static int count = 0;
    
    public MissionSequencer<Mission> getSequencer()
    {
      devices.Console.println("** MyApp.getSequencer");
      return new MySequencer();
    }
    
    public long immortalMemorySize()
    {
      return Const.IMMORTAL_MEM_SIZE;
    }
   
    private static class MySequencer extends MissionSequencer<Mission> 
    {
      private Mission[] missions;  
      private int active = 0;
      
      private Mission miss;
      
      MySequencer()
      {
        super (new PriorityParameters (Priorities.PR95), 
                storageParameters); 
        missions = new Mission[2];
        missions[0] = new MyMission0();
        missions[1] = new MyMission1();
        
        miss = missions[0];
      }
      
      public Mission getNextMission() 
      {
        MyApp.count++;
        if (MyApp.count % 1 == 0)  // or MyApp.count % 10, etc.
        {
          devices.Console.println("MS " + MyApp.count);
        }
        if (missions[active].terminationPending() && MyApp.count > 5)
        {
          devices.Console.println("MySeq.getNextMission: null"); 
          return null;
        }
        else
        {
          active = (active + 1) % missions.length;
          miss = missions[active];        
          return miss;
        }
      } 
    }
  }
  
  public static StorageParameters storageParameters;

  public static void main (String[] args)
  {
    Const.BACKING_STORE_SIZE = 49*1000; 
    Const.IMMORTAL_MEM_SIZE  = 23*1000; 
    Const.MISSION_MEM_SIZE    = 2*1000; 
    Const.PRIVATE_MEM_SIZE   = 1*1000; 
    
    Memory.startMemoryAreaTracking();
    
    storageParameters = 
            new StorageParameters (Const.BACKING_STORE_SIZE, 
                                   new long[]{ Const.HANDLER_STACK_SIZE }, 
                                   Const.PRIVATE_MEM_SIZE,
                                   Const.IMMORTAL_MEM_SIZE,
                                   Const.MISSION_MEM_SIZE);
    
    devices.Console.println("\n****** Cyc 3 main.begin *********" );
    //  executes in heap memory
    new Launcher(new MyApp(), 0);
    devices.Console.println("****** Cyc 3 main.end *********");
    Memory.reportMemoryUsage();
    args = null;
  }
}
