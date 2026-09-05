int redPin=8;
int db=2000;
int br=9600;
String onMess="The LED is on";
String offMess="The LED is off";

void setup() {
  pinMode(redPin,OUTPUT);
  Serial.begin(br);
}

void loop() {
  digitalWrite(redPin,HIGH);
  Serial.println(onMess);
  delay(db);

  digitalWrite(redPin,LOW);
  Serial.println(offMess);
  delay(db);
}
