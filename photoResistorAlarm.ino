int readPin = A1;
int buttonPin= 10;
int alarmSystem = 11;

int analogVal; 

void setup()
{
	pinMode(readPin, INPUT);
   pinMode(buttonPin,INPUT);
	pinMode(alarmSystem, OUTPUT);
   Serial.begin(9600);
}

void alert(){
    digitalWrite(alarmSystem, 1);
    delay(200);
    digitalWrite(alarmSystem, 0);
    delay(200);
}

void loop()
{
  analogVal = analogRead(readPin);

  delay(100);
   while(analogVal>750 && digitalRead(buttonPin)==1){
    alert();
    Serial.println(digitalRead(buttonPin));
 }

}