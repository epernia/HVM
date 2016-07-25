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

import minicdj.util.HashMap;

public class Device extends PeripheralLibrary {
	
   /* Attributes */
   private HashMap pins = new HashMap();
   private HashMap peripherals = new HashMap();
   
   /* Default devices */
   private static Device CIAA_NXP =
      new Device( 0, "CIAA-NXP" );
   private static Device EDU_CIAA_NXP = 
      new Device( 1, "EDU-CIAA-NXP" );
   private static Device TEST_DEVICE = 
      new Device( 1, "Test Device" );

   /* Constructor */
   public Device( int id, String name ) {
	  super( id, name);
   }

   /* Put a Peripheral */
   public void putPeripheral( String key, Peripheral value ) {
      peripherals.put( key, value );
   }

   /* Put a Pin */
   public void putPin( String key, Pin value ) {
	  pins.put( key, value );
   }   

   /* Returns a Pin with Name pinName */
   public Pin getPin( String pinName ) {
	  return (Pin) pins.get(pinName);
   }
 
   /* Returns a Peripheral with Name periphName */
   public Peripheral getPeripheral(String periphName){
	  return (Peripheral) peripherals.get(periphName);
   }
   public Peripheral get(String periphName){
	  return (Peripheral) peripherals.get(periphName);
   }   

   /* Device Builders */
   
   public static Device testDevice() {
      Pin pin = new Pin( 1, "P1", TEST_DEVICE);
      pin.addMode(PinMode.DI);
      pin.addMode(PinMode.DO);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 2, "P2", TEST_DEVICE);
      pin.addMode(PinMode.DI);
      pin.addMode(PinMode.DO);
      pin.addMode(PinMode.U);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 3, "P3", TEST_DEVICE);
      pin.addMode(PinMode.DI);
      pin.addMode(PinMode.DO);
      pin.addMode(PinMode.U);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 4, "P4", TEST_DEVICE);
      pin.addMode(PinMode.AI);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 5, "P5", TEST_DEVICE);
      pin.addMode(PinMode.AO);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 6, "P6", TEST_DEVICE);
      pin.addMode(PinMode.DI);
      pin.addMode(PinMode.DO);
      pin.addMode(PinMode.AI);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 7, "VCC", TEST_DEVICE);
      pin.addMode(PinMode.X);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      pin = new Pin( 8, "GND", TEST_DEVICE);
      pin.addMode(PinMode.X);
      TEST_DEVICE.putPin(pin.getName(),pin);
      
      DigitalIO periph = 
         new DigitalIO(0,"DIO0",TEST_DEVICE,TEST_DEVICE.getPin("P1"));
      TEST_DEVICE.putPeripheral(periph.getName(),periph);
      
      periph = new DigitalIO(1,"DIO1",TEST_DEVICE,TEST_DEVICE.getPin("P2"));
      TEST_DEVICE.putPeripheral(periph.getName(),periph);
      
      periph = new DigitalIO(2,"DIO2",TEST_DEVICE,TEST_DEVICE.getPin("P3"));
      TEST_DEVICE.putPeripheral(periph.getName(),periph);
      
      periph = new DigitalIO(3,"DIO3",TEST_DEVICE,TEST_DEVICE.getPin("P6"));
      TEST_DEVICE.putPeripheral(periph.getName(),periph);
      
      Uart periph2 = new Uart(0,"UART0", TEST_DEVICE,
      TEST_DEVICE.getPin("P2"),TEST_DEVICE.getPin("P3"));
      TEST_DEVICE.putPeripheral(periph2.getName(),periph2);
      
      AnalogIO periph3 =
         new AnalogIO(0,"AI0",TEST_DEVICE,TEST_DEVICE.getPin("P4"));
      TEST_DEVICE.putPeripheral(periph3.getName(),periph3);
      
      periph3 = new AnalogIO(1,"AO0",TEST_DEVICE,TEST_DEVICE.getPin("P5"));
      TEST_DEVICE.putPeripheral(periph3.getName(),periph3);
      
      periph3 = new AnalogIO(2,"AI1",TEST_DEVICE,TEST_DEVICE.getPin("P6"));
      TEST_DEVICE.putPeripheral(periph3.getName(),periph3);
      
      return TEST_DEVICE;
   }

   
   public static Device ciaaNxp() {
	   
      /* 1 to 20 */
	  Pin pin = new Pin( 1, "AOUT", CIAA_NXP);
	  
	  pin.addMode(PinMode.AO);
      CIAA_NXP.putPin(pin.getName(),pin);
      AnalogIO periphA =  new AnalogIO(0,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphA.getName(),periphA);
    
	   
      pin = new Pin( 2, "GNDA0", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin( 3, "GND0", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin( 4, "DOUT0", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      DigitalIO periphD =  new DigitalIO(0,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin( 5, "DOUT0_C", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin( 6, "DOUT1", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(1,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin( 7, "DOUT1_C", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin( 8, "DOUT2", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(2,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin( 9, "DOUT2_C", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(10, "DOUT3", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(3,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(11, "DOUT3_C", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(12, "GND1", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(13, "VOUT_24V", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(14, "DOUT4", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(4,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(15, "DOUT5", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(5,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(16, "DOUT6", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(6,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(17, "DOUT7", CIAA_NXP);
      pin.addMode(PinMode.DO);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(7,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin(18, "NC", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(19, "VIN_24V", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(20, "GND2", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      /* 21 to 40 */
      pin = new Pin(21, "RS485_A", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(22, "RS485_B", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(23, "RS485_GND2", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(24, "DIN0", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(0,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(25, "DIN1", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(1,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(26, "DIN2", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(2,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(27, "DIN3", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(3,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(28, "DIN4", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(4,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(29, "DIN5", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(5,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(30, "DIN6", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(6,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      pin = new Pin(31, "DIN7", CIAA_NXP);
      pin.addMode(PinMode.DI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(7,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin(32, "DIN_COM", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(33, "AIN0", CIAA_NXP);
      pin.addMode(PinMode.AI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(0,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      pin = new Pin(34, "AIN1", CIAA_NXP);
      pin.addMode(PinMode.AI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(1,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      pin = new Pin(35, "AIN2", CIAA_NXP);
      pin.addMode(PinMode.AI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(2,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      pin = new Pin(36, "AIN3", CIAA_NXP);
      pin.addMode(PinMode.AI);
      CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(3,pin.getName(), CIAA_NXP,pin);
      CIAA_NXP.putPeripheral(periphA.getName(),periphA);
     
      pin = new Pin(37, "GNDA1", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(38, "CAN_H", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      pin = new Pin(39, "CAN_L", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      pin = new Pin(40, "GND3", CIAA_NXP);
      pin.addMode(PinMode.X);
      CIAA_NXP.putPin(pin.getName(),pin);
      
      return CIAA_NXP;
   }
   

   
   public static Device eduCiaaNxp() {
	  int i = 0;
	  Pin pin = new Pin( 0, "", EDU_CIAA_NXP);
	  DigitalIO periphD =  new DigitalIO(0,pin.getName(), EDU_CIAA_NXP,pin);
      AnalogIO periphA =  new AnalogIO(0,pin.getName(), EDU_CIAA_NXP,pin);
	  

      /* Digital */
      
      for( i=0; i<=35; i++ ){
         pin = new Pin( i+1, ("DIO"+Integer.toString(i)), EDU_CIAA_NXP);
         pin.addMode(PinMode.DI);
         pin.addMode(PinMode.DO);
         EDU_CIAA_NXP.putPin(pin.getName(),pin);      
         periphD =  new DigitalIO(i,pin.getName(), pin.getDevice(), pin);
         EDU_CIAA_NXP.putPeripheral(periphD.getName(), periphD);
      }
      
      pin = new Pin( 37, "TEC1", EDU_CIAA_NXP);
      pin.addMode(PinMode.DI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(36,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 38, "TEC2", EDU_CIAA_NXP);
      pin.addMode(PinMode.DI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(37,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 39, "TEC3", EDU_CIAA_NXP);
      pin.addMode(PinMode.DI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(38,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 40, "TEC4", EDU_CIAA_NXP);
      pin.addMode(PinMode.DI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(39,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
       
      pin = new Pin( 41, "LED1", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(40,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 42, "LED2", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(41,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 43, "LED3", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(42,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 44, "LEDR", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(43,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 45, "LEDG", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(44,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      pin = new Pin( 46, "LEDB", EDU_CIAA_NXP);
      pin.addMode(PinMode.DO);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphD =  new DigitalIO(45,pin.getName(), pin.getDevice(), pin);
      EDU_CIAA_NXP.putPeripheral(periphD.getName(),periphD);
      
      
      /* Analog */

      pin = new Pin(48, "AIN0", EDU_CIAA_NXP);
      pin.addMode(PinMode.AI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(0,pin.getName(), pin.getDevice(),pin);
      EDU_CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      
      pin = new Pin(49, "AIN1", EDU_CIAA_NXP);
      pin.addMode(PinMode.AI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(1,pin.getName(), pin.getDevice(),pin);
      EDU_CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      
      pin = new Pin(50, "AIN2", EDU_CIAA_NXP);
      pin.addMode(PinMode.AI);
      EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(2,pin.getName(), pin.getDevice(),pin);
      EDU_CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      
	  pin = new Pin( 47, "AOUT", EDU_CIAA_NXP);
	  pin.addMode(PinMode.AO);
	  EDU_CIAA_NXP.putPin(pin.getName(),pin);
      periphA =  new AnalogIO(0,pin.getName(), pin.getDevice(),pin);
      EDU_CIAA_NXP.putPeripheral(periphA.getName(),periphA);
      
      /* Uart */
      
      return EDU_CIAA_NXP;
   }
   
}
