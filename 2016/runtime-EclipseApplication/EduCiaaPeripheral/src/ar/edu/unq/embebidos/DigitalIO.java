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

public class DigitalIO extends Peripheral{
	
   /* Constants */
   public static final int INPUT           = 0;
   public static final int OUTPUT          = 1;
   public static final int INPUT_PULLUP    = 2;
   public static final int INPUT_PULLDOWN  = 3;
   public static final int INPUT_REPEATER  = 4;
   
   /* Attributes */
   private boolean value;
	
   /* Constructor */
   public DigitalIO( int id, String name, Device device, Pin pin ) {
	  super( id, name, device, pin );
   }

   /* Internal peripheral configuration */
   protected void nativeConfig(Pin aPin, PinMode aPinMode) {
	  if(aPinMode.getId() == 1){
	     this.digitalConfig( this.getId(), INPUT );
	  }
	  if(aPinMode.getId() == 2){
	     this.digitalConfig( this.getId(), OUTPUT );
	  }
   }

   /* Write method */
   public void write(boolean data){
      value = data;
      this.digitalWrite( this.getId(), value);
      //devices.Console.println("Write " + value + " on Peripheral " + this.getName() );
   }

   /* Read method */
   public boolean read(){
      value = this.digitalRead( this.getId() );
	  //devices.Console.println("Read " + value + " from Peripheral " + this.getName() );
      return value;
   }

   /* Native Methods */
   private native boolean digitalConfig( int periphID, int mode );
   private native boolean digitalRead( int periphID );
   private native boolean digitalWrite( int periphID , boolean value );
/*
   private boolean digitalConfig( int pinID, int mode ){
      devices.Console.println("DigitalIO configured"); 
      return value;}
   private boolean digitalRead( int pinID ){return value;}
   private boolean digitalWrite( int pinID , boolean value ){return value;}
*/
}