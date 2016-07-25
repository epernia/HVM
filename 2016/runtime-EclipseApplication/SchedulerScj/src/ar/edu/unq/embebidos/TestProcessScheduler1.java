/* Copyright 2015, Eric Pernia.
 * All rights reserved.
 *
 * This file is part HVM4CIAA.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

package ar.edu.unq.embebidos;

import vm.Architecture;
import vm.Process;
import vm.Scheduler;

public class TestProcessScheduler1 {
   
   static int count;
   
   private static class TwoProcessScheduler implements Scheduler {
      private Process p1;
      private Process p2;
      private Process current;
      private Process mainProcess;

      public TwoProcessScheduler(Process task1, Process task2, Process mainProcess, int[] stack) {
         this.p1 = task1;
         this.p2 = task2;
         this.mainProcess = mainProcess;
         p1.initialize();
         p2.initialize();
         current = task1;
      }
      
      @Override
      public Process getNextProcess() {
         if (count > 100) {
            current.transferTo(mainProcess);
         }
         if (current == p1) {
            current = p2;
         } else {
            current = p1;
         }
         return current;
      }
      
      @Override
      public void wait(Object target) {
      }
      
      @Override
      public void notify(Object target) {
      }

   }
   
   public static void main(String args[]) {
	   
      Process p1 = new vm.Process(new vm.ProcessLogic() {
      
         @Override
         public void run() {
            while (true) {
               if ((count & 0x1) == 1) {
                  count++;
               }
               vm.ClockInterruptHandler.instance.disable();
               devices.Console.println("task1");
               vm.ClockInterruptHandler.instance.enable();
            }
         }
         
         @Override
         public void catchError(Throwable t) {
            devices.Console.println("Process: exception -> " + t);
         }
      }, new int[1024]);
      
      
      Process p2 = new vm.Process(new vm.ProcessLogic() {
      
         @Override
         public void run() {
            while (true) {
               if ((count & 0x1) == 0) {
                  count++;
               }
               vm.ClockInterruptHandler.instance.disable();
               devices.Console.println("task2");
               vm.ClockInterruptHandler.instance.enable();
            }
         }
         
         @Override
         public void catchError(Throwable t) {
            devices.Console.println("Process: exception -> " + t);
         }
      }, new int[1024]);

      count = 0;
      
      int[] sequencerStack = new int[1024];
      Process mainProcess = new vm.Process(null, null);
      Scheduler scheduler = new TwoProcessScheduler(p1, p2, mainProcess, sequencerStack);

      vm.ClockInterruptHandler.initialize(scheduler, sequencerStack);
      vm.ClockInterruptHandler clockHandler = vm.ClockInterruptHandler.instance;
      
      //devices.Console.println( "Architecture: " + Architecture.architecture);

      //devices.Console.println(">> Before: clockHandler.register();");
      
      clockHandler.register();

      //devices.Console.println(">> After: clockHandler.register();");
      
      clockHandler.enable();
      clockHandler.startClockHandler(mainProcess);
      clockHandler.yield();
      
      devices.Console.println("finished");
      args = null;
   }
}


/*
On PC:
======

task2
...
task2
task1
...
task1
...
task2
finished
SUCCESS  
*/
