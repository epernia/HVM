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

public class UartConfig{

   /* Constants */
   public static final int BLOCKING        = 0;
   public static final int RX_INTERRUPT    = 1;
   public static final int TX_INTERRUPT    = 2;  
   public static final int TX_RX_INTERRUPT = 3;  
   public static final int OFF             = 4;   

   public static final int PARITY_NONE = 0;
   public static final int PARITY_ODD  = 1;
   public static final int PARITY_EVEN = 2;   
	
   /* Attributes */
   private int mode;
   private int baudRate;
   private int dataBits;
   private int stopBits;
   private int parity;

   /* Constructor */
   public UartConfig( int aMode, int aBaudRate, int aDataBits, int aStopBits, int aParity ) {
	  setMode(aMode);
      setBaudRate(aBaudRate);
      setDataBits(aDataBits);
      setStopBits(aStopBits);
      setParity(aParity);
   }

   /* Getters an Setters */
   public int getMode() {
	      return mode;
   }
   public void setMode(int mode) {
      this.mode = mode;
   }
   public int getBaudRate() {
      return baudRate;
   }
   public void setBaudRate(int baudRate) {
      this.baudRate = baudRate;
   }
   public int getDataBits() {
      return dataBits;
   }
   public void setDataBits(int dataBits) {
      this.dataBits = dataBits;
   }
   public int getStopBits() {
      return stopBits;
   }
   public void setStopBits(int stopBits) {
      this.stopBits = stopBits;
   }
   public int getParity() {
      return parity;
   }
   public void setParity(int parity) {
      this.parity = parity;
   }
}