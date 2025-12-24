int in1=2;
int in2=3;
int en1=6;



void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(en1,255);
  delay(100);

}
