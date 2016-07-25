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

public class Main {

   public static void main(String[] args) {


/*----------------------------------------------------------*/
/* EDU-CIAA-NXP Tec, Led, Analog I/O and Non Blocking Delay */
/*----------------------------------------------------------*/	   
      int analogValue = 1000;
	      
	  // Se imprime por consola de HVM
	  devices.Console.println("Dispositivo encendido");  

      // Se obtiene el objeto ciaa que es un singleton
      Device eduCiaa = Device.eduCiaaNxp(); 

      // Se obtienen los objetos DigitalIO
      DigitalIO dioTec4 = (DigitalIO) eduCiaa.get("TEC4");  
      DigitalIO dioLedB = (DigitalIO) eduCiaa.get("LEDB");  
      DigitalIO dioLed3 = (DigitalIO) eduCiaa.get("LED3");    
      
      // Se crean los objetos Led, ledB y led1 
      Led ledB = new Led(dioLedB);
      Led led3 = new Led(dioLed3);
      
      // Se crea el objeto Boton tec1
      Button tec4 = new Button(dioTec4);

      // Se obtienen los objetos AnalogIO
      AnalogIO ain0 = (AnalogIO) eduCiaa.get("AIN0");  
      AnalogIO aout = (AnalogIO) eduCiaa.get("AOUT");
      
      // Se crea un objeto Delay
      Delay delay = new Delay(0);
      
      
      // Se imprime por consola de HVM
      devices.Console.println("A punto de entrar al loop infinito");  
      
	  // Delay bloqueante
	  Delay.waitForMs(1000);
	  
	  
      while (true) {
    	  
         // Se lee la entrada analogica
         analogValue = ain0.read();    
    	  
         // Se escribe la salida analogica
         aout.write(analogValue);
          
         
         // Se chequea el pulsador y actualiza el led1
     	 if( tec4.isPulsed() ){
     		led3.on();
     	 } else{
     		led3.off();
     	 }


         // Setup Non-Blocking Delay with setDelay
         delay.setDelay( analogValue );

         // isDelayComplete return true when delay 
         // time is accomplished
         if ( delay.isDelayComplete() ){
            ledB.toggle();
         }
         

      }

/*-------------------------------------------------------*/	  

/*-------------------------------------------------------*/
/*                 EDU-CIAA-NXP DigitalIO                */
/*-------------------------------------------------------*/	   
/*
      boolean boolValue = false;
      
	  // Se imprime por consola de HVM
	  devices.Console.println("Dispositivo encendido");  
      
      // Se obtiene el objeto ciaa que es un singleton
      Device ciaa = Device.eduCiaaNxp();
      
      // Se obtienen los objetos DigitalIO
      DigitalIO dio0 = (DigitalIO) ciaa.get("DIO0");
      DigitalIO dioTec1 = (DigitalIO) ciaa.get("TEC1");  
      DigitalIO dioLedB = (DigitalIO) ciaa.get("LEDB");    

      // Se conmfiguran los DigitalIO
      dio0.config(PinMode.DI);
      dioTec1.config(PinMode.DI);
      dioLedB.config(PinMode.DO);

      // Se imprime por consola de HVM
      devices.Console.println("Leds y teclas configuradas");  
      
      while (true) {
      
         // Se lee el DigitalIO dioTec1
         boolValue = !dioTec1.read();
         
         // Se escribe en DigitalIO dioLedB
         dioLedB.write(boolValue);
      }
*/
/*-------------------------------------------------------*/

/*-------------------------------------------------------*/
/*               EDU-CIAA-NXP Button - Led               */
/*-------------------------------------------------------*/	   
/*
	  // Se imprime por consola de HVM
	  devices.Console.println("Dispositivo encendido");  

      // Se obtiene el objeto ciaa que es un singleton
      Device ciaa = Device.eduCiaaNxp(); 

      // Se obtienen los objetos DigitalIO
      DigitalIO dioTec1 = (DigitalIO) ciaa.get("TEC1");  
      DigitalIO dioLedB = (DigitalIO) ciaa.get("LEDB");    
      
      // Se crea el objeto Led ledB 
      Led ledB = new Led(dioLedB);
      
      /* Se crea el objeto Boton tec1
      Button tec1 = new Button(dioTec1);

	  // Se imprime por consola de HVM
      devices.Console.println("Leds y teclas configuradas");  
      
      while (true) {
    	  
    	 if( tec1.isPulsed() ){
    		ledB.on();
    	 } else{
     		ledB.off();
    	 }
    	 
      }
*/
/*-------------------------------------------------------*/	  

/*----------------------------------------------------------*/	
/*                    EDU-CIAA-NXP Delay                    */
/*----------------------------------------------------------*/	   
/*
	  // Se imprime por consola de HVM
	  devices.Console.println("Dispositivo encendido");  

      // Se obtiene el objeto ciaa que es un singleton
      Device ciaa = Device.eduCiaaNxp(); 

      // Se obtienen los objetos DigitalIO
      DigitalIO dioLedB = (DigitalIO) ciaa.get("LEDB");    
      
      // Se crea el objeto Led ledB 
      Led ledB = new Led(dioLedB);
      
      while (true) {
    	  
    	  ledB.on();
    	  Delay.waitForMs(100);

          ledB.off();
          Delay.waitForMs(900);
      }
*/
/*----------------------------------------------------------*/	  

   }
}
    
