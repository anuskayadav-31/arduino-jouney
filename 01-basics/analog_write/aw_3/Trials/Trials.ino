int redLED = 12;
int br=9600;
int potPin=A0;
int potVal;
int waitT=100; 

void setup() {
  pinMode(redLED, OUTPUT);
  Serial.begin(br);
  pinMode(potPin,INPUT);
}

void loop() {
  analogWrite(redLED, 64);
  //digitalWrite(redLED, 64); //in digitalWrite, any non-zero value is treated as HIGH, so it will always appear bright 
  delay(2000);

  analogWrite(redLED, 192);
  //digitalWrite(redLED, 192);
  delay(2000);
  
  potVal=analogRead(potPin); // in these three lines, it is measuring voltage at A0, not across the LED (which I am trying to find)
  Serial.print("PotVal: ");
  Serial.println(potVal);
  
  delay(waitT);
}


/*
int pwmPin=11;
int bright=126;
void setup() {
  pinMode(pwmPin,OUTPUT);
}
 
void loop() {
  analogWrite(pwmPin,bright);
}
// Since, we are giving brightness as 126, i.e,2.5 V, the oscilloscope shows that the voltage is 5 for half the time, and 0 for half the time, so average becopmes 2.5V. 
*/
/*
int pwmPin=11;
int bright=26; //Target: 0.5 V so, 10% of 255~ 26
void setup() {
  pinMode(pwmPin,OUTPUT);
}
 
void loop() {
  analogWrite(pwmPin,bright);
}
//Light became much dimmer
*/


//Instead of giving volts input to analogWrite, give 255 range input as computer understands in terms of bits, else if we do till 5 volts it will understand 5 bits, so not much brightness can be achieved.


//An efficient format of the above code #drawback: variables are not used
/*
int sensorValue = analogRead(A0);

int pwmValue = map(sensorValue, 0, 1023, 0, 255);

analogWrite(11, pwmValue);

*/

/*
int potPin=A2;
int potVal;
int br=9600;
int waitT=100; 
int redLED=11;
float writeVal;
//float volts;

void setup() {
pinMode(potPin,INPUT); //we are reading from the potentiometer
pinMode(redLED,OUTPUT);
Serial.begin(br);
}

void loop(){
potVal=analogRead(potPin);//potval 0 to 1023
//writeVal=  (255./1023.)*potVal;              //0 to 255
writeVal=pow(2,potVal/127.875)-1;              //just another way to perform the same dimming :exponential way, same continous decrease, no jumps observed
//volts=(5./1023.)*potVal; //(5/1023) will always return 0.0 V only since, integer/integer returns integer only
Serial.print("potVal: ");//Converts the analog read input into a proper volt(0-5V) display
Serial.println(potVal);
Serial.print("Voltage: ");
//Serial.println(volts);
Serial.println(writeVal);
delay(waitT);     //takes 10 readings per second
//analogWrite(redLED,volts);
analogWrite(redLED,writeVal);
}
*/