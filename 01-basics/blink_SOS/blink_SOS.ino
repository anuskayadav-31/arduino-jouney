int redPin=3;
int dit=150;
int dah=500;
int endWait=2000;
float myPi=3.14;
char myInitial='A';
String myName="Anuska Yadav";

void setup(){
  pinMode(redPin,OUTPUT);
}
void loop(){
  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dah);
  digitalWrite(redPin,LOW);
  delay(dah);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  digitalWrite(redPin,HIGH);
  delay(dit);
  digitalWrite(redPin,LOW);
  delay(dit);

  delay(endWait);

}
