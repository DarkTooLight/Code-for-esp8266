int led1 = D1;
int led2 = D2;
int led3 = D3;
int led4 = D4;
int led5 = D5;
int led6 = D6;
int led7 = D7;
int led8 = D8;



void setup(){
    Serial.begin(9600);
    
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
        
  pinMode (A0, INPUT);
}
void loop(){
  float voltage = analogRead(A0);
    
    Serial.println(voltage);
    delay(100);
  // to turn off LEDs chronologically
  // to turn on LEDs chronologically
 
    
  if (voltage > 128.00){
        digitalWrite(led1, HIGH);
    }
    
  if (voltage < 128.00){
        digitalWrite(led1, LOW);
    }
    
  if (voltage > 256.00){
        digitalWrite(led2, HIGH);
    }
    
  if (voltage < 256.00){
        digitalWrite(led2, LOW);
    }
    
  if (voltage > 384.00){
    digitalWrite(led3, HIGH);
}
    
  if (voltage < 384.00){
        digitalWrite(led3, LOW);
    }
    
  if (voltage > 512.00){
        digitalWrite(led4, HIGH);
    }
    
  if (voltage < 512.00){
        digitalWrite(led4, LOW);
    }
    
  if (voltage > 640.00){
        digitalWrite(led5, HIGH);
    }
    
  if (voltage < 640.00){
        digitalWrite(led5, LOW);
    }
 
  if (voltage > 768.00){
        digitalWrite(led6, HIGH);
    }
    
  if (voltage < 768.00){
    digitalWrite(led6, LOW);
}
    
  if (voltage > 896.00){
    digitalWrite(led7, HIGH);
}
    
  if (voltage < 896.00){
        digitalWrite(led7, LOW);
    }
    
  if (voltage > 1000.00){
    digitalWrite(led8, HIGH);
}
    
  if (voltage < 1000.00){
        digitalWrite(led8, LOW);
    }
    
}
