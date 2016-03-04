unsigned long interval  = 60 * 1000 * 5;
unsigned long duration = 2 * 1000;

void trigger() {
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);

  delay(duration);

  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
}

void setup() {
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  trigger();
  delay(interval);
}
