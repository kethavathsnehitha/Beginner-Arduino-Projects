int led=11;
int pot=A0;
int x;
int y;

void setup() {
  
 pinMode(11,OUTPUT);
 pinMode(A0,INPUT);

}

void loop() {
 x=analogRead(A0);
y= map(x,0,1023,0,255);
analogWrite(led,y);



}
