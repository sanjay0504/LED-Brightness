const int potPin = 36;
const int ledPin = 17;

void setup(){
  pinMode(potPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}
void loop(){
  int analogVal = analogRead(potPin);
  int brightness = map(analogVal, 0, 4095, 0 , 255);
  analogWrite(ledPin, brightness);
  delay(10);
}