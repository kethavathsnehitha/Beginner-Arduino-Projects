int potentiometer=A0;
int x;



void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);

}

void loop() {
 x=digitalRead(potentiometer);
 Serial.println(x);
 delay(1000);

}
