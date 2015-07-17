#include <SoftwareSerial.h>
#include <Arduino.h>
#define led_pin 6
#define rx 10
#define tx 11


char inData[20]; // Allocate some space for the string
char inChar=-1;  // Where to store the character read
byte index = 0; // Index to array; where to store the character

SoftwareSerial Bluetooth(rx,tx);

 void setup(){
  Bluetooth.begin(9600);
 }
 
 char Comp(char* This){
    while(Bluetooth.available() > 0){  // Dont read unless there is some data
      if(index < 19)
      {
        inChar = Bluetooth.read(); // Read a character
        inData[index] = inChar;    // Store it
        index++; 
        inData[index] = ='\0';
      }
    }
    
    if(strcmp(inData,this == 0){
      for (int i=0;i<19;i++) {
          inData[i]=0;
      }
      index=0;
      return(0);
      else {
      return(1);
  }
    
