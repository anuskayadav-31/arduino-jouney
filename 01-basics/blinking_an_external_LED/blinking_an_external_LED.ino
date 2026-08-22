void setup(){
  pinMode(13,OUTPUT);
}
void loop(){
  
  for (int i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(50);
  }
  delay(500);

  for (int i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(1500);
    digitalWrite(13,LOW);
    delay(100);
  }
  delay(500);
  
  for (int i=0;i<3;i++){
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(50);
  }
  delay(3000);
}


