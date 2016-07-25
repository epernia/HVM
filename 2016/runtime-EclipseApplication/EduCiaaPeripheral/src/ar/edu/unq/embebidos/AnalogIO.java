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

public class AnalogIO extends Peripheral{

   /* Constants */
   public static final int INPUTS       = 0;
   public static final int OUTPUTS      = 1;
   
   public static final int AI_INTERRUPT = 0;  
   public static final int AI_BLOCKING  = 1;  
   public static final int AI_OFF       = 2; 
 
   public static final int AO_ON        = 0;  
   public static final int AO_OFF       = 1;  

   /* Attributes */
   private int value;

   /* Constructor */
   public AnalogIO( int id, String name, Device device, Pin pin ) {
	  super( id, name, device, pin );
   }

   /* Internal peripheral configuration */
   protected void nativeConfig(Pin aPin, PinMode aPinMode) {
   }

   /* Internal peripheral configuration */
   public boolean config( PinMode aPinMode ) {
	  this.analogConfig( aPinMode.getId() );
	  return false;
   }

   /* Write method */
   public void write(int data){
      this.analogWrite( this.getId(), value);
      value = data;
      /*devices.Console.println("Write " + value + 
         " on Peripheral " + this.getName() );*/
   }

   /* Read method */
   public int read(){
      value = this.analogRead( this.getId() );
	  /*devices.Console.println("Read " + value + 
         " from Peripheral " + this.getName() );*/
      return value;
   }

   /* Native Methods */
   private native boolean analogConfig( int analogIorO );
   private native boolean analogAdvancedConfig( int analogIorO, int mode );
   private native int analogRead( int peripheralID );
   private native boolean analogWrite( int peripheralID , int value );
/*
   private boolean analogConfig( int pinID, int mode ){
      devices.Console.println("AnalogIO configured"); 
      return true;}
   private int analogRead( int pinID ){return value;}
   private boolean analogWrite( int pinID , int value ){return true;}
*/
}