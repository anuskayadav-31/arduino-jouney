/*
int myNum;
int br=9600;
String myPrompt="Please enter your number: ";

void setup() {
  Serial.begin(br);
}

void loop() {
  Serial.println(myPrompt);
  while (Serial.available()==0){
  }
    myNum=Serial.parseInt();
    if (myNum>0){
      Serial.println("Positive");
    }
    if (myNum<0){
      Serial.println("Negative");
    }
}
*/

int myNum;

int br = 9600;

String myPrompt = "Please enter your number: ";

void setup() {
  Serial.begin(br);
}

void loop() {

  Serial.println(myPrompt);

  while (Serial.available() == 0) {
  }

  myNum = Serial.parseInt();

  // Clear remaining serial characters
  while (Serial.available() > 0) {
    Serial.read();
  }

  if (myNum > 0) {
    Serial.println("Positive");
  }
  else if (myNum < 0) {
    Serial.println("Negative");
  }
  else {
    Serial.println("Zero");
  }

  delay(200);
}
