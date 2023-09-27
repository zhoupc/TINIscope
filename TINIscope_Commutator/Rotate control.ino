int rightin=2;
int leftin=3;
int rl=4;
int m=5;

void setup() {
  // put your setup code here, to run once:
pinMode(rightin,INPUT);
pinMode(leftin,INPUT);
pinMode(rl,OUTPUT);
pinMode(m,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(rightin)==HIGH){
  digitalWrite(rl,HIGH);
  for(int i=0;i<1280;i++){
    digitalWrite(m,HIGH);
    delayMicroseconds(10);
    digitalWrite(m,LOW);
    delayMicroseconds(10);
  }
}
if(digitalRead(leftin)==HIGH){
  digitalWrite(rl,LOW);
  for(int i=0;i<1280;i++){
    digitalWrite(m,HIGH);
    delayMicroseconds(10);
    digitalWrite(m,LOW);
    delayMicroseconds(10);
  }
}
}
