#include <Servo.h>
int servoPin=9;

//int servoAngle=0; // angle between 0 and 180
//int servoAngle=90;
//int servoAngle=180;

int servoAngle; 
int br=115200;
int dt=50;
String prompt="What angle do you desire?"; //2

Servo myServo; //creating an object of servo that we can talk to

void setup() {
 Serial.begin(br); 
 myServo.attach(servoPin); //Servo library is talking to servopin
}

void loop() {
  Serial.println(prompt);//2
  while (Serial.available()==0){ //2
 }
  servoAngle=Serial.parseInt();  //2
  
  myServo.write(servoAngle);
  delay(dt);
}

//First movement: a noise that brings it to zero position, aligning with the x-axis
//Second movement: to 180

//2. Now, take input from user what angle they want it to rotate to