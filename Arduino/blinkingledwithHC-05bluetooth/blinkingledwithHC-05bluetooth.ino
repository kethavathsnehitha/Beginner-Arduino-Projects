int led=11;
int data;


void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);

}

void loop() {
  while(Serial.available()>0){
    data=Serial.read();
    
    if(data=='A'){
      digitalWrite(11,HIGH);
    }
    if(data=='B'){
      digitalWrite(11,LOW);
    }
  }
}
