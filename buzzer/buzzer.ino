
const int buzzerPin=A1;
const int ldrPin=A0;


void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int ldrStatus=analogRead(ldrPin);
  if(ldrStatus>=400)
  {
    tone(buzzerPin,1000);
    delay(100);
    
    noTone(buzzerPin);
    delay(100);
    Serial.println("-------------ALARM ACTIVATE------------------");
    
  }
 /* else{
    noTone(buzzerPin);
    Serial.println("ALARM DEACTIVATED");
  }*/
  // put your main code here, to run repeatedly:

}
