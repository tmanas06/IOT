int ledPin = 13; 
int inputPin = 2; 
int pirState = LOW;
int val = 0; 
void setup() {
pinMode(ledPin, OUTPUT); 
pinMode(inputPin, INPUT);
Serial.begin(9500);
}
void loop() {
val = digitalRead(inputPin); 
if (val == HIGH) { 
if (pirState == LOW) {
Serial.println("Motion detected!");
digitalWrite(ledPin, HIGH); 
pirState = HIGH;
}
} 
else {
if (pirState == HIGH) {
Serial.println("Motion ended!");
digitalWrite(ledPin, LOW); 
pirState = LOW;
}
}
}
