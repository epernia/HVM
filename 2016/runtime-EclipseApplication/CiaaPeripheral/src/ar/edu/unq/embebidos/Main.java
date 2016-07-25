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
import ar.edu.unq.embebidos.Device;
import ar.edu.unq.embebidos.DigitalIO;
import ar.edu.unq.embebidos.PinMode;

public class Main {

   public static void main(String[] args) {

   /*-------------------------------------------------------*/
   /*                   CIAA-NXP DigitalIO                  */
   /*-------------------------------------------------------*/	   

      boolean boolValue = false;
      
	  devices.Console.println("Dispositivo encendido");  
	      
      Device ciaa = Device.ciaaNxp();
      DigitalIO din0 = (DigitalIO) ciaa.get("DIN0");
      DigitalIO din1 = (DigitalIO) ciaa.get("DIN1");
      DigitalIO din2 = (DigitalIO) ciaa.get("DIN2");
      DigitalIO din3 = (DigitalIO) ciaa.get("DIN3");
      DigitalIO din4 = (DigitalIO) ciaa.get("DIN4");
      DigitalIO din5 = (DigitalIO) ciaa.get("DIN5");
      DigitalIO din6 = (DigitalIO) ciaa.get("DIN6");
      DigitalIO din7 = (DigitalIO) ciaa.get("DIN7");
      
      DigitalIO dout0 = (DigitalIO) ciaa.get("DOUT0");
      DigitalIO dout1 = (DigitalIO) ciaa.get("DOUT1");
      DigitalIO dout2 = (DigitalIO) ciaa.get("DOUT2");
      DigitalIO dout3 = (DigitalIO) ciaa.get("DOUT3");   
      DigitalIO dout4 = (DigitalIO) ciaa.get("DOUT4");
      DigitalIO dout5 = (DigitalIO) ciaa.get("DOUT5");
      DigitalIO dout6 = (DigitalIO) ciaa.get("DOUT6");
      DigitalIO dout7 = (DigitalIO) ciaa.get("DOUT7"); 

      din0.config(PinMode.DI);
      din1.config(PinMode.DI);
      din2.config(PinMode.DI);
      din3.config(PinMode.DI);
      din4.config(PinMode.DI);
      din5.config(PinMode.DI);
      din6.config(PinMode.DI);
      din7.config(PinMode.DI);
      
      dout0.config(PinMode.DO);
      dout1.config(PinMode.DO);
      dout2.config(PinMode.DO);
      dout3.config(PinMode.DO);
      dout4.config(PinMode.DO);
      dout5.config(PinMode.DO);
      dout6.config(PinMode.DO);
      dout7.config(PinMode.DO);
      
      devices.Console.println("Entradas y salidas configuradas");  
      
      while (true) {
          boolValue = din0.read();
          dout0.write(boolValue);

          boolValue = din1.read();
          dout1.write(boolValue);

          boolValue = din2.read();
          dout2.write(boolValue);

          boolValue = din3.read();
          dout3.write(boolValue);

          boolValue = din4.read();
          dout4.write(boolValue);

          boolValue = din5.read();
          dout5.write(boolValue);

          boolValue = din6.read();
          dout6.write(boolValue);

          boolValue = din7.read();
          dout7.write(boolValue);
       }

   }
}