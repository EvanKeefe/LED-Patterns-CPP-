/* LED PATTERNS 
 *  EVAN KEEFE
 *  
 * SOFTWARE
 * 20 LED CONTROL
 * 9 Patterns
 *  
 * NEED TO DO:
 *   - add IR remote control input.
 *     - use buttons on remote for each pattern
 *     - use buttons on remote to adjust delay time
 *     - turn on and off
 *   - Clean up Code/Organize
 *   - Add more patterns?
 * 
 * HARDWARE
 * 17 LEDS
 * 17x 220 Ohm Resistors
 * Arduino Mega2560 R3
 * too many jumper cables
 * 
 * NEED TO DO:
 * - Extend leads of LEDS
 * - Place under Acrylic
 * - clean up connections
 * - Solder board?
 */

#include <IRremote.h>

int timeDelay;
int maxNumOfSequences = 4;
int sequenceNum;

int receiverPin = 12;

void setup()
{
  Serial.begin(9600);
  IrReceiver.begin(receiverPin, ENABLE_LED_FEEDBACK);
  
  for(int i=22; i<= 39; i++) 
  pinMode(i,OUTPUT);
}

void loop()
{
      /*IrReceiver.decode();
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
      */
    
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat1(); // Single LED on across row
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++)
       { 
       pat2(); //Snake
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++)
       {
       pat3();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat4();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++)
       { 
       pat5();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat6();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat7();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat8();
       }
       for(sequenceNum=0; sequenceNum <= maxNumOfSequences; sequenceNum++) 
       {
       pat9();
       }
    
}
  
void pat1()
{
    timeDelay = 75;
    for(int i=22; i<=39; i++) 
    {
      digitalWrite(i,HIGH);
      delay(timeDelay);
      digitalWrite(i,LOW);
    }
    
    for(int i=39; i>=22; i--) 
    {
      digitalWrite(i,HIGH);
      delay(timeDelay);
      digitalWrite(i,LOW);
    }
}   
void pat2()
{
     timeDelay = 100;
     for(int i=22; i<=39; i++) 
     {
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      digitalWrite(i+1,HIGH);
      delay(timeDelay);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
     }
    
    for(int i=39; i>=22; i--) 
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      digitalWrite(i+1,HIGH);
      delay(timeDelay);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
    }
}
void pat3()
{
    timeDelay = 100;
    for(int i=22; i<=39; i=i+2) 
    {
    digitalWrite(i,HIGH);
    delay(timeDelay);
    digitalWrite(i,LOW);
    }
    
    for(int i=39; i>=22; i=i-2) 
    {
    digitalWrite(i,HIGH);
    delay(timeDelay);
    digitalWrite(i,LOW);
    }       
}

void pat4()
{   
    timeDelay = 100;
    for(int i=22; i<=39; i++) 
    {
    digitalWrite(i,HIGH);
    delay(timeDelay);
    }
    
    for(int i=39; i>=22; i--) 
    {
    digitalWrite(i,HIGH);
    delay(timeDelay);
    digitalWrite(i,LOW);
    }
}

void pat5()
{
    timeDelay = 100;
    for(int i=22; i<=39; i++) 
    {
    digitalWrite(i,HIGH);
    }
    delay(timeDelay);
    for(int i=22; i<=39; i++) 
    {
    digitalWrite(i,LOW);
    }
    delay(timeDelay);  
}

void pat6()
{
    timeDelay = 200;
    for(int i=22; i<=30; i++) 
    {
    digitalWrite(i,HIGH);
    }
    for(int i=31; i<=39; i++) 
    {
    digitalWrite(i,LOW);
    }
    delay(timeDelay);
    for(int i=22; i<=30; i++) 
    {
    digitalWrite(i,LOW);
    }
    for(int i=31; i<=39; i++) 
    {
    digitalWrite(i,HIGH);
    }
    delay(timeDelay);
}

void pat7()
{
    timeDelay = 200;
    for(int i=22; i<=39; i=i+2) 
    {
    digitalWrite(i,HIGH);
    }
    for(int i=23; i<=38; i=i+2)
    {
    digitalWrite(i,LOW);
    }
    delay(timeDelay);
    for(int i=22; i<=39; i=i+2) 
    {
    digitalWrite(i,LOW);
    }
    for(int i=23; i<=38; i=i+2) 
    {
    digitalWrite(i,HIGH);
    }
    delay(timeDelay);
}
     
void pat8()
{
    timeDelay = 40;
    timeDelay++;
    
    //Increase time Delay when timeDelay is called
    //Pins 22 and 23 high to low
    digitalWrite(22,HIGH);
    digitalWrite(23,HIGH);
    delay(timeDelay);
    digitalWrite(22,LOW);
    digitalWrite(23,LOW);
    delay(timeDelay++);

    //Pins 24 and 25 high to low
    digitalWrite(24,HIGH);
    digitalWrite(25,HIGH);
    delay(timeDelay++); 
    digitalWrite(24,LOW);
    digitalWrite(25,LOW);
    delay(timeDelay++);

    //Pins 26 and 27 high to low
    digitalWrite(26,HIGH);
    digitalWrite(27,HIGH);
    delay(timeDelay++);
    digitalWrite(26,LOW);
    digitalWrite(27,LOW);
    delay(timeDelay++);

    //Pins 28 and 29 high to low
    digitalWrite(28,HIGH);
    digitalWrite(29,HIGH);
    delay(timeDelay++);
    digitalWrite(28,LOW);
    digitalWrite(29,LOW);
    delay(timeDelay++);

    //Pins 30 and 31 high to low
    digitalWrite(30,HIGH);
    digitalWrite(31,HIGH);
    delay(timeDelay++);
    digitalWrite(30,LOW);
    digitalWrite(31,LOW);
    delay(timeDelay++);

    //Pins 32 and 33 high to low
    digitalWrite(32,HIGH);
    digitalWrite(33,HIGH);
    delay(timeDelay++);
    digitalWrite(32,LOW);
    digitalWrite(33,LOW);
    delay(timeDelay++);

    //Pins 34 and 35 high to low
    digitalWrite(34,HIGH);
    digitalWrite(35,HIGH);
    delay(timeDelay++);
    digitalWrite(34,LOW);
    digitalWrite(35,LOW);
    delay(timeDelay++);

    //Pins 36 and 37 high to low
    digitalWrite(36,HIGH);
    digitalWrite(37,HIGH);
    delay(timeDelay++);
    digitalWrite(36,LOW);
    digitalWrite(37,LOW);
    delay(timeDelay++);

    //Pins 38 and 39 high to low
    digitalWrite(38,HIGH);
    digitalWrite(39,HIGH);
    delay(timeDelay++);
    digitalWrite(38,LOW);
    digitalWrite(39,LOW);
    delay(timeDelay++);
/*
    //Pins 40 and 41 high to low
    digitalWrite(40,HIGH);
    digitalWrite(41,HIGH);
    delay(timeDelay++);
    digitalWrite(40,LOW);
    digitalWrite(41,LOW);
    delay(timeDelay++);   
 */   
}    

void pat9()
{ 
    timeDelay = 100;
    
    for(int i=22; i<=39; i++) 
    {
    digitalWrite(i,HIGH);
    }
    for(int i=22; i<=39; i++)                      
    {         
    digitalWrite(i,LOW);
    delay(timeDelay);
    digitalWrite(i,HIGH);
    }
    for(int i=39; i>=22; i--) 
    {
    digitalWrite(i,LOW);
    delay(timeDelay);
    digitalWrite(i,HIGH);      
    }
}  
