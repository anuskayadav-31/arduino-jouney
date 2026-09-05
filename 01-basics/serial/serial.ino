int cnt=1;
int waitT=1000;
String cntMess="Your count is:";
void setup() {
  Serial.begin(9600);
}

void loop() {
 Serial.print(cntMess);
 Serial.println(cnt);
 cnt+=1;
 delay(waitT);
}