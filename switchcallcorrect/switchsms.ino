const int ldrPin=A0;
void setup() {
  Serial.begin(9600);
  //pinMode(buzzerPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
   int ldrStatus=analogRead(ldrPin);
  if(ldrStatus>=400)
  {
 /*Serial.print("AT+CMGF=1\r\n");
  delay(5000);
  Serial.print("AT+CMGS=\"");
  Serial.print("+918120303115");
  Serial.print("\"\r\n");
  //replace x by your number
  delay(2000);
  //Serial.print("hello swati");*/
  Serial.println("ATD+918120303115;\r\n");
    delay(5000);
   //Serial.write(0x1A);
    
  }
  // put your main code here, to run repeatedly:

}
