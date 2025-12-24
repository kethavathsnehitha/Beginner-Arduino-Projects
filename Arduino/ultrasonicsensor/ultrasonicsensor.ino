int trigger=7;
int echo=6;
int timeinMicro;
int distanceincm;



void setup() {
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  timeinMicro= pulseIn(echo,HIGH);
  distanceincm= timeinMicro/26/2;
  Serial.println(distanceincm);



}
