int irsensor=7;
int y;
int led=8;
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
 y=digitalRead(irsensor);
 Serial.println(y);
 delay(300);
 if(y==0){
  digitalWrite(led,HIGH);
 }
 else{
  digitalWrite(led,LOW);
 }

}
