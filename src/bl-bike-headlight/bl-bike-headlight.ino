#include <SoftwareSerial.h>
#include <Arduino.h>
#define led_pin 9
#define rx 10
#define tx 11
#define level = 255;
#define brightness = 255;

SoftwareSerial Bluetooth(rx,tx);

 void setup(){
  Bluetooth.begin(9600);
  Serial.begin(9600); //Debug Purposes
  Bluetooth.setTimeout(50);
  pinMode(led_pin, OUTPUT);
 }
 

void loop(){
 while(Bluetooth.available() > 0){  // Dont read unless there is some data
  level = Bluetooth.parseInt();
  Serial.println(level);
 }
 if(level < 256 && level > 0){
  brightness = level;
 }
 Serial.println(brightness);
 analogWrite(led_pin, brightness);
}
    
