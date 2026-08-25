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



  /*for (int i=0;i<3;i++){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(50);
  }
  delay(500);
  for (int i=0;i<3;i++){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(1200);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(100);
  }
  delay(500);
  
  for (int i=0;i<3;i++){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(50);
  }
  delay(3000);*/
}