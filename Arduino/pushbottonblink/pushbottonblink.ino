int push=6;
int x;
int led=7;
void setup() {
  Serial.begin(9600);
 pinMode(6,INPUT);
 pinMode(7,OUTPUT);

}

void loop() {
 x= digitalRead(push);
 Serial.println(x);
 if(x==0){
  digitalWrite(led,LOW);
 }
 else{
  digitalWrite(led,HIGH);
 }
}
