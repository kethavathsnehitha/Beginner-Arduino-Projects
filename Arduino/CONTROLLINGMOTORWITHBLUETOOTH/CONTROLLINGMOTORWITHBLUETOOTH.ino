int in1=2;
int in2=3;
int en=6;
int data;



void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() {
  while(Serial.available()>0){
    data=Serial.read();
    if(data=='C'){
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      analogWrite(6,0);
    }
    if(data=='D'){
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      analogWrite(6,100);
    }
    if(data=='E'){
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      analogWrite(6,255);
    }

  }


}
