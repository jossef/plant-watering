unsigned long interval  = 60 * 1000 * 60;
unsigned long duration = 10 * 1000;

unsigned long lastTriggered;

bool shouldTrigger() {
  double diffFromLastTriggered = millis() - lastTriggered;
  return (diffFromLastTriggered > interval);
}

void trigger() {
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);

  delay(duration);

  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);

  lastTriggered = millis();
}

void setup() {
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  trigger();
}

void loop() {
  if (shouldTrigger())
  {
    trigger();
  }

  delay(500);
}
