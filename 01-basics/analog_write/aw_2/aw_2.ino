int redPin=11;
int dit=1500;
int dah=1200;
int endWait=3000;

void setup() {
 pinMode(redPin,OUTPUT);
}

void loop() {
  for (int bright=1;bright<256;bright+=63){
    analogWrite(redPin,bright);
    delay(dit);
    analogWrite(redPin,0);
    delay(dah);
  } 
  delay(endWait);
}
