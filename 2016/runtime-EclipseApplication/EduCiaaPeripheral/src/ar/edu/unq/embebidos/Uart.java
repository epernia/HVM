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

public class Uart extends Peripheral{

   /* Constants */
   private final Pin PIN2;	

   /* Attributes */
   private char txData;
   private char rxData;
   private int baudRate;
   private int dataBits;
   private int stopBits;
   private int parity;

   /* Constructor */
   protected Uart( int id, String name, Device device, Pin pinTx, Pin pinRx ) {
	  super( id, name, device, pinTx );
	  PIN2 = pinRx;
   }

   /* Internal peripheral configuration */
   public void nativeConfig(Pin aPin, PinMode aPinMode) {}

   /* Configuration */
   public boolean config(int baudRate, int mode){
	  boolean retVal = false;
	  retVal = this.configPin( this.getTxPin(), PinMode.U );
	  retVal = retVal || this.configPin( this.getRxPin(), PinMode.U );
	  this.uartConfig( this.getId(), mode, baudRate );
      return retVal;
   }

   public boolean config(UartConfig config){
      boolean retVal = false;
	  retVal = this.configPin( this.getTxPin(), PinMode.U );
	  retVal = retVal || this.configPin( this.getRxPin(), PinMode.U );
	  this.uartAdvancedConfig( 
	     this.getId(), config.getMode(), config.getBaudRate(), config.getDataBits(),
         config.getStopBits(), config.getParity()
      );
      return retVal;
   }

   /* Getters */
   public Pin getTxPin() {
      return PIN;
   }
   public Pin getRxPin() {
      return PIN2;
   } 

   /* Write method */
   public void write(char data){
      txData = data;
      this.uartWrite( this.getId(), txData);
      uartWrite( this.getId(), txData );
      //devices.Console.print( txData + "" );
   }
   public void write( String txt ){
      int i = 0;
      for(i=0;i<txt.length();i++){
         this.write(txt.charAt(i) );
      }
   }

   /* Read method */
   public char read(){
      rxData = this.uartRead( this.getId() );
      //rxData = this.uart2RxByte();
	  devices.Console.println("Read " + 'a' + " from Peripheral " + this.getName() );
      return rxData;
   }

   /* Native Methods */
   private native boolean uartConfig( int uartID, int mode, int baudRate );
   private native boolean uartAdvancedConfig( int uartID, int mode, int aBaudRate, int aDataBits, int aStopBits, int aParity );
   private native char uartRead( int uartID );
   private native boolean uartWrite( int uartID , char value );
/*
   private boolean uartConfig( int uartID, int baudRate ){
      devices.Console.println("Uart " + uartID + " configured, baud Rate: " + baudRate );  
      return true;}
   private boolean uartAdvancedConfig( int uartID, int aBaudRate, int aDataBits, int aStopBits, int aParity ){
      devices.Console.println("Uart " + uartID + " configured.");
      devices.Console.println("Baud Rate: " + aBaudRate ); 
      devices.Console.println("Data Bits: " + aDataBits ); 
      devices.Console.println("Stop Bits: " + aStopBits ); 
      devices.Console.println("Parity: " + aParity ); 
      return true;}
   private char uartRead( int uartID ){return txData;}
   private boolean uartWrite( int uartID , char value ){return true;}
*/
}
