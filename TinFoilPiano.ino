#include <CapacitiveSensor.h>      // Library


CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);     // Inputs pin 2,3,4,5,6,7,8,9,10, utilizing data from Captive sensor library
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);     
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);      
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);         
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);  
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);     

int treshold = 500;      // Necessary treshold input

void setup()                    
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF);   // Turns off autocalibration
  Serial.begin(9600); // This tells the Arduino to get ready to exchange messages with the Serial Monitor at a data rate of 9600 bits per second.
}

void loop()                    
{
  long Sensor1 =  cs_2_3.capacitiveSensor(30);    // Sensitivity for sensors
  long Sensor2 =  cs_2_4.capacitiveSensor(30);
  long Sensor3 =  cs_2_5.capacitiveSensor(30);
  long Sensor4 =  cs_2_6.capacitiveSensor(30);
  long Sensor5 =  cs_2_7.capacitiveSensor(30);
  long Sensor6 =  cs_2_8.capacitiveSensor(30);
  long Sensor7 =  cs_2_9.capacitiveSensor(30);
  long Sensor8 =  cs_2_10.capacitiveSensor(30);

  Serial.print(Sensor1);           // Prints data to the serial port as human-readable ASCII text       
  Serial.print(" ");                
  Serial.print(Sensor2);             
  Serial.print(" ");                  
  Serial.print(Sensor3);                
  Serial.print(" ");               
  Serial.print(Sensor4);               
  Serial.print(" ");                    
  Serial.print(Sensor5);                 
  Serial.print(" ");                   
  Serial.print(Sensor6);                 
  Serial.print(" ");                    
  Serial.print(Sensor7);                 
  Serial.print(" ");
  Serial.println(Sensor8);                                               

  if (Sensor1 > treshold) tone(11, 131);   // If given necessary treshold, a specific tone will be played on the speaker
  if (Sensor2 > treshold) tone(11, 147);   
  if (Sensor3 > treshold) tone(11, 165);
  if (Sensor4 > treshold) tone(11, 175);
  if (Sensor5 > treshold) tone(11, 196);
  if (Sensor6 > treshold) tone(11, 220);
  if (Sensor7 > treshold) tone(11, 247);
  if (Sensor8 > treshold) tone(11, 262);
  
  if (Sensor1<=treshold&Sensor2<=treshold&Sensor3<=treshold&Sensor4<=treshold&Sensor5<=treshold&Sensor6<=treshold&Sensor7<=treshold&Sensor8<=treshold){
    noTone(11);       // Code for "no tone" if there is not enough treshold
  }
    
}
