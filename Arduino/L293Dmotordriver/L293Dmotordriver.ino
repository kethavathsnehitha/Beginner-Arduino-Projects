int a=8;
int b=9;



void setup() {
 pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);

}

void loop() {
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);

}
// in case of motor driver if the two control pins a and b are low then it stops tf pin a is low and the pin b is high then rotataes in cw  and if pin a is high and pin b is low then it rotates in anti clockwise