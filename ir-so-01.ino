#include <IRremote.h>
 IRrecv IR();

 void setup(){ 
    IR.enableIRIn();
    Serial.begin(9600);
    } 
    
void loop(){ 
  if (IR.decode()) {
  
  Serial.println(IR.deccodedIRData.decodedRawData, HEX);
    
    delay(1000);
    }