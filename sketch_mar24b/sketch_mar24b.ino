#include<SoftwareSerial.h>
SoftwareSerial gsm(0,1);

void setup() {
  delay(10000);
  Serial.begin(9600);
  gsm.begin(9600);
  gsm.println("AT+CMGF=1");
  delay(100);
  gsm.println("AT+CMGS=\"+918120303115\"\r"); //replace x by your number
  delay(100);
  gsm.println("hello");
  delay(100);
  gsm.println((char)26);
  delay(100);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
