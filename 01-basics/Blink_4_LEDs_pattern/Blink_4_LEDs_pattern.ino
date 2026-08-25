void setup(){
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
    
    digitalWrite(10,HIGH);
    delay(300);
    digitalWrite(10,LOW);
    delay(120);
    digitalWrite(11,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(120);
    digitalWrite(12,HIGH);
    delay(300);
    digitalWrite(12,LOW);
    delay(120);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(13,LOW);
    delay(120);
    
    for (int i=0;i<2;i++){
      digitalWrite(10,HIGH);
      delay(180);
      digitalWrite(10,LOW);
      delay(120);
    }
    digitalWrite(11,HIGH);
    delay(200);
    digitalWrite(11,LOW);
    delay(150);
    digitalWrite(12,HIGH);
    delay(200);
    digitalWrite(12,LOW);
    delay(150);
    digitalWrite(13,HIGH);
    delay(350);
    digitalWrite(13,LOW);
    delay(150);
    digitalWrite(10,HIGH);
    delay(200);
    digitalWrite(10,LOW);
    delay(150);
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(150);

    delay(4000);
}