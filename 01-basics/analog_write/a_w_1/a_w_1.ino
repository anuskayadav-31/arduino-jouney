int redPin=11;
int bright=4;

void setup() {
  pinMode(redPin,OUTPUT);
}

void loop() {
 analogWrite(redPin,bright);
}
