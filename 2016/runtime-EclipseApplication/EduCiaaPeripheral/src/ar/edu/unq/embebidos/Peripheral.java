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

public class Peripheral extends PeripheralLibrary {

   /* Attributes */
   protected final Pin PIN;

   /* Constants */
   private final Device DEVICE;
	   
   /* Constructor */
   public Peripheral( int id, String name, Device device, Pin pin ) {
	  super( id, name);
	  DEVICE = device;
	  PIN = pin;
   }

   /* Device getter */
   public Device getDevice() {
      return DEVICE;
   }

   /* Config */
   public boolean config( PinMode aPinMode ){
      return this.configPin( PIN, aPinMode );
   }
   
   public boolean configPin( Pin aPin, PinMode aPinMode ){
      boolean retVal = false;
      if( aPin.isSupportMode(aPinMode) ){
         if( aPin.isInUse(this) ){
            devices.Console.println( "The " + aPin.getName() + 
               ", Pin is in use by Peripheral " + 
               aPin.getPeripheral().getName()
	 	    );
         } else{
            aPin.setPeripheral(this);
            retVal = false;
            this.nativeConfig( aPin, aPinMode);
         }
      } else{
         devices.Console.println( "The " + aPin.getName() + 
            " Pin is not Support " + aPinMode.getName() + 
            " mode."
         );
	  }
      return retVal;
   }

   /* Internal peripheral configuration - Subclass responsability */
   protected void nativeConfig(Pin aPin, PinMode aPinMode) {
      // Override me!
	  devices.Console.println("Usar subclases!");  
   }

}	