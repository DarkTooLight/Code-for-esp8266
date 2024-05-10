
#define echoPin D5              // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
#define trigPin D4"               // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
long duration;
int distance;

void setup(){
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  //String disp = String(distance);

  Serial.print("Distance: ");
  Serial.print(disp);
  Serial.println(" cm");
  delay(1000);
}