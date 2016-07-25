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

import icecaptools.IcecapCompileMe;
import vm.Process;
import vm.ProcessLogic;

public class TestProcess {
   private static Process p1;
   private static Process p2;
   private static Process mainProcess;
   
   // Se obtiene el objeto ciaa que es un singleton
   static Device eduCiaa = Device.eduCiaaNxp(); 

   // Se obtienen los objetos DigitalIO
   static DigitalIO dioLedG = (DigitalIO) eduCiaa.get("LEDG");
   static DigitalIO dioLed1 = (DigitalIO) eduCiaa.get("LED1");
   static DigitalIO dioLed2 = (DigitalIO) eduCiaa.get("LED2");
   static DigitalIO dioLed3 = (DigitalIO) eduCiaa.get("LED3"); 
   
   // Se crean los objetos Led
   static Led ledG = new Led(dioLedG);
   static Led led1 = new Led(dioLed1);
   static Led led2 = new Led(dioLed2);
   static Led led3 = new Led(dioLed3);
   
   private static class P1 implements ProcessLogic {
      @Override
      @IcecapCompileMe
      public void run() {

         ledG.on();
         led1.off();
         led2.off();
         led3.off();
         
         Delay.waitForMs(1000);
         
    	 devices.Console.println("Proceso 1. Transferenica a Proceso 2.");
    	 p1.transferTo(p2);
      }
      @Override
      public void catchError(Throwable t) {
    	  
    	 ledG.off();
         led1.on();
         led2.off();
         led3.off();
         
    	 devices.Console.println("Error en Proceso 1.");
      }
   }
   private static class P2 implements ProcessLogic {
      @Override
      @IcecapCompileMe
      public void run() {
    	 
    	 ledG.off();
         led1.off();
         led2.on();
         led3.off();

         Delay.waitForMs(1000);

    	 devices.Console.println("Proceso 2. Transferenica a Proceso Principal.");
         p2.transferTo(mainProcess);
      }
      @Override
      public void catchError(Throwable t) {

    	 ledG.off();
         led1.off();
         led2.off();
         led3.on();
    	  
    	 devices.Console.println("Error en Proceso 2.");
      }
   }
   public static void main(String[] args) {
	  devices.Console.println("Inicio de Proceso Principal.");
      p1 = new vm.Process(new P1(), new int[512]);
      p2 = new vm.Process(new P2(), new int[512]);

      ledG.on();
      led1.on();
      led2.on();
      led3.on();

      Delay.waitForMs(1000);
      
      mainProcess = new vm.Process(null, null);
      p1.initialize();
      p2.initialize();
      mainProcess.transferTo(p1);
      devices.Console.println("Fin de Proceso Principal, se deja en un loop infinito.");

      ledG.off();
      led1.off();
      led2.off();
      led3.off();
      
      while (true) {;}
   }
}

/*
Inicio de Proceso Principal.
Proceso 1. Transferenica a Proceso 2.
Proceso 2. Transferenica a Proceso Principal.
Fin de Proceso Principal, se deja en un loop infinito.
*/
