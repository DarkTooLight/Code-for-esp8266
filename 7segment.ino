int led01 = D1;
int led02 = D2;
int led03 = D3;
int led04 = D4;
int led05 = D5;
int led06 = D6;
int led07 = D7;
int led08 = D8;

void setup(){
 
  pinMode(led01,OUTPUT);
  pinMode(led02,OUTPUT);
  pinMode(led03,OUTPUT);
  pinMode(led04,OUTPUT);
  pinMode(led05,OUTPUT);
  pinMode(led06,OUTPUT);
  pinMode(led07,OUTPUT);
  pinMode(led08,OUTPUT);
}

void loop(){
  //for 0
  digitalWrite(led08,HIGH);
  
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led05,HIGH);
  digitalWrite(led06,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led05,LOW);
  digitalWrite(led06,LOW);
  digitalWrite(led07,LOW);
  
  //for 1
  
  digitalWrite(led04,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led04,LOW);
  digitalWrite(led07,LOW);
  
  //for 2
  
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led01,HIGH);
  digitalWrite(led05,HIGH);
  digitalWrite(led06,HIGH);
  
  delay(1000);
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led01,LOW);
  digitalWrite(led05,LOW);
  digitalWrite(led06,LOW);
  
  //for 3
  
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led01,HIGH);
  digitalWrite(led07,HIGH);
  digitalWrite(led06,HIGH);
  
  delay(1000);
  
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led01,LOW);
  digitalWrite(led07,LOW);
  digitalWrite(led06,LOW);
    
  //for 4
  
  digitalWrite(led01,HIGH);
  digitalWrite(led02,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led01,LOW);
  digitalWrite(led02,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led07,LOW);
  
  //for 5
  
  digitalWrite(led01,HIGH);
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led07,HIGH);
  digitalWrite(led06,HIGH);
  
  delay(1000);
  
  digitalWrite(led01,LOW);
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led07,LOW);
  digitalWrite(led06,LOW);
  
  //for 6
  
  digitalWrite(led01,HIGH);
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led05,HIGH);
  digitalWrite(led07,HIGH);
  digitalWrite(led06,HIGH);
  
  delay(1000);
  
  digitalWrite(led01,LOW);
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led05,LOW);
  digitalWrite(led07,LOW);
  digitalWrite(led06,LOW);
  
  //for 7
  
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led07,LOW);
  
  //for 8
 
  digitalWrite(led01,HIGH);
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led05,HIGH);
  digitalWrite(led06,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led01,LOW);
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led05,LOW);
  digitalWrite(led06,LOW);
  digitalWrite(led07,LOW);
  
  //for 9
  
  digitalWrite(led01,HIGH);
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led06,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led01,LOW);
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led06,LOW);
  digitalWrite(led07,LOW);
  
  //for 10
  
  digitalWrite(led02,HIGH);
  digitalWrite(led03,HIGH);
  digitalWrite(led04,HIGH);
  digitalWrite(led05,HIGH);
  digitalWrite(led06,HIGH);
  digitalWrite(led07,HIGH);
  
  delay(1000);
  
  digitalWrite(led02,LOW);
  digitalWrite(led03,LOW);
  digitalWrite(led04,LOW);
  digitalWrite(led05,LOW);
  digitalWrite(led06,LOW);
  digitalWrite(led07,LOW);
}