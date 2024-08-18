int stcp_Pin = D4;
int shcp_Pin = D3;
int ds_Pin = D2;


void setup() {
  pinMode(stcp_Pin, OUTPUT);
  pinMode(shcp_Pin, OUTPUT);
  pinMode(ds_Pin, OUTPUT);
  
}

void loop() {

  for (int number = 0; number < 256; number++){

  digitalWrite(stcp_Pin, LOW);
  shiftOut(ds_Pin, shcp_Pin, LSBFIRST, number );
  digitalWrite(stcp_Pin, HIGH);
  delay(300);
  }
}
