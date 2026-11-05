//Using Internal Pullup resistors

int butPin=2;
int butVal;
int br=115200;
int dt=100;

void setup() {
  Serial.begin(br);
  pinMode(butPin,INPUT_PULLUP);
}

void loop() {
  butVal=digitalRead(butPin);
  Serial.println(butVal);
  delay(dt);
}
