float T = 10000;
float fMax=500;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
float sinValues() {
  float value = sin(millis()/T);  
  return value;
}

void loop() {
  float delayLed = 1.1 + sinValues();
  Serial.println(delayLed);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayLed*fMax);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayLed*fMax);
}
