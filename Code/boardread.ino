const int ADC_PIN = 4;

void setup() {
  Serial.begin(115200);
  delay(300);
  analogReadResolution(12);            // 0–4095
  analogSetPinAttenuation(ADC_PIN, ADC_11db);
}

void loop() {
  int raw = analogRead(ADC_PIN);

  // Lock Y-axis so the waveform is visible
  Serial.print("0 ");
  Serial.print("4095 ");
  Serial.println(raw);

  delay(5);   // adjust to change time scale
}