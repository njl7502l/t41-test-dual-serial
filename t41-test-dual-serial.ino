void setup(){
  Serial.begin(115200);
  SerialUSB1.begin(112500);
}
void loop(){
  Serial.println("hello");
  SerialUSB1.println("world");
  delay(1000);
}