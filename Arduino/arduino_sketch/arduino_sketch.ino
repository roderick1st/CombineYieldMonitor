#include <SoftwareSerial.h>
SoftwareSerial hc05(2,3);
String cmd="";
float sensor_val=0;
void setup(){
 //Initialize Serial Monitor
 Serial.begin(9600);
 //Initialize Bluetooth Serial Port
 hc05.begin(9600);
}
void loop(){
 // Simulate sensor measurement
 sensor_val=(float)random(256); // random number between 0 and 255
   
 //Write sensor data to HC05
 hc05.println(sensor_val); //push serial data through the bluetooth device
 Serial.println(sensor_val); //push serial data to the terminal

 delay(500);
}
