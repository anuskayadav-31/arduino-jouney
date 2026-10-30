//Dimming a LED using potentiometer

int potPin=A2;
int potVal;
int br=9600;
int waitT=100; 
int redLED=11;
float writeVal;

void setup() {
pinMode(potPin,INPUT); //we are reading from the potentiometer
pinMode(redLED,OUTPUT);
Serial.begin(br);
}

void loop(){
potVal=analogRead(potPin);//potval 0 to 1023
writeVal=pow(2,potVal/127.875)-1;   //0 to 255           
Serial.print("potVal: ");//Converts the analog read input into a proper volt(0-5V) display
Serial.println(potVal);
Serial.print("Voltage: ");
Serial.println(writeVal);
delay(waitT);     //takes 10 readings per second
analogWrite(redLED,writeVal);
}


