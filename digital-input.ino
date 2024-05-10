int in = D1;
    int out = D5;
    
    void setup() {
        pinMode(in, INPUT);
        pinMode(out, OUTPUT);
    }
    
    void loop(){
      
      int inVa = digitalRead(in);
      
        if (inVa == LOW) {
         digitalWrite(out, HIGH);
           // delay(500);
        }
        else{
          digitalWrite(out, LOW);
        }
        }