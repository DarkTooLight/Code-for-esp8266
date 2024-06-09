//TECHATRONIC.COM 
#include <Servo.h> 
// servo library 
 Servo s1;
d0 void setup() { 
    s1.attach(2); 
    // servo attach D3 pin of arduino 
    }
 void loop() {
     s1.write(0);
     delay(500);
     s1.write(45);
     delay(500);
     s1.write(90);
     delay(500);  
     s1.write(135);
     delay(500);
     s1.write(180);
     
     
    } 