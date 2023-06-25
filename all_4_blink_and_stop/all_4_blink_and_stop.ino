void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(2000); 
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(10, LOW);
  delay(2000); 
}
