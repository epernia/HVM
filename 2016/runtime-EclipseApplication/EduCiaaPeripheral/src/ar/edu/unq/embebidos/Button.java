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

public class Button {

   /* Constants */
   private final DigitalIO DIGITAL_INPUT;

   /* Constructor */
   public Button(DigitalIO aDigitalInput){
      DIGITAL_INPUT = aDigitalInput;
      DIGITAL_INPUT.config(PinMode.DI);
   }
   
   /* Use with button.read(); or button.isPulsado(); 
    * or button.isPulsado(debunceTime); */
   public boolean read(){
      return DIGITAL_INPUT.read();
   }
   public boolean isPulsed() {
      boolean value = !(this.read());
      /*if(value){
    	 devices.Console.println("Button is pulsed"); 
      } else{
    	 devices.Console.println("Button is not pulsed");
      }*/
      return value;  
   }
   public boolean isPulsed(int debunceTime) {
	  boolean value = !(this.read());
	  Delay.waitForMs(20);
	  value = !(this.read());
      /*if(value){
     	 devices.Console.println("Button is pulsed"); 
      } else{
    	 devices.Console.println("Button is not pulsed");
      }*/
      return value;  
   }
   
}
