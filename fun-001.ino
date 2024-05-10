int Btn01 = D1;
int Btn02 = D2;

int Led01 = D0;
int Led02 = D3;
int Led03 = D4;
int Led04 = D5;
int Led05 = D6;
int Led06 = D7;
int Led07 = D8;

void setup(){
  pinMode(Btn01, INPUT);
  pinMode(Btn02, INPUT);
  
  pinMode(Led01, OUTPUT);
  pinMode(Led02, OUTPUT);
  pinMode(Led03, OUTPUT);
  pinMode(Led04, OUTPUT);
  pinMode(Led05, OUTPUT);
  pinMode(Led06, OUTPUT);
  pinMode(Led07, OUTPUT);
}

void loop(){
  int BtnPress01 = digitalRead(Btn01);
  int BtnPress02 = digitalRead(Btn01);
  
  
  if(BtnPress01 == HIGH){
    
  digitalWrite(Led01,HIGH);
  delay(100);
  digitalWrite(Led01,LOW);
    
  digitalWrite(Led02,HIGH);
  delay(100);
  digitalWrite(Led02,LOW);
        
  digitalWrite(Led03,HIGH);
  delay(100);
  digitalWrite(Led03,LOW);
  
  digitalWrite(Led04,HIGH);
  delay(100);
  digitalWrite(Led04,LOW);
    
  digitalWrite(Led05,HIGH);
  delay(100);
  digitalWrite(Led05,LOW);
    
  digitalWrite(Led06,HIGH);
  delay(100);
  digitalWrite(Led06,LOW);
        
  digitalWrite(Led07,HIGH);
  delay(100);
  digitalWrite(Led07,LOW);
  }
  
  
  
  if(BtnPress02 == HIGH){
    
  digitalWrite(Led07,HIGH);
  delay(100);
  digitalWrite(Led07,LOW);
    
  digitalWrite(Led06,HIGH);
  delay(100);
  digitalWrite(Led06,LOW);
        
  digitalWrite(Led05,HIGH);
  delay(100);
  digitalWrite(Led05,LOW);
  
  digitalWrite(Led04,HIGH);
  delay(100);
  digitalWrite(Led04,LOW);
    
  digitalWrite(Led03,HIGH);
  delay(100);
  digitalWrite(Led03,LOW);
    
  digitalWrite(Led02,HIGH);
  delay(100);
  digitalWrite(Led02,LOW);
        
  digitalWrite(Led01,HIGH);
  delay(100);
  digitalWrite(Led01,LOW);
  }
}