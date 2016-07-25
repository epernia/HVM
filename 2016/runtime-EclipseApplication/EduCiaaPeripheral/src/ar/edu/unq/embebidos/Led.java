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

public class Led {

   /* Constants */
   private final DigitalIO DIGITAL_OUTPUT;

   /* Attributes */
   private boolean state;

   /* Constructor */
   public Led(DigitalIO aDigitalOutput){
      DIGITAL_OUTPUT = aDigitalOutput;
      DIGITAL_OUTPUT.config(PinMode.DO);
   }
   
   /* Use with led.write(value); or led.on(); and led.off(); */
   public void write( boolean value){
      DIGITAL_OUTPUT.write(value);
      state = value;
   }
   public void on(){
      this.write(true);
      state = true;
      //devices.Console.println("Led on"); 
   }
   public void off(){
      this.write(false);
      state = false;
      //devices.Console.println("Led off");
   }
   public void toggle(){
      if( state ){
         this.off();
      } else{
         this.on();
      }
   }
   
}
