int butPin=2;
int redPin=10;   //2
int butVal;
int br=115200;
int dt=50;

void setup() {
  Serial.begin(br);
  //pinMode(butPin,INPUT);
  pinMode(butPin,INPUT_PULLUP); //3
  pinMode(redPin,OUTPUT);  //2
}

void loop() {
  butVal=digitalRead(butPin);
  Serial.println(butVal);

  if (butVal==1){              // 2 two if-s
    digitalWrite(redPin,LOW);
  }
  if (butVal==0){
    digitalWrite(redPin,HIGH);
  }

  delay(dt);
}

//After connecting the red LED, actually we are controlling this independent circuit by the output of the previous circuit by using the value of butValue(voltage) to contro the LED. 
