int led = 7;
int sensor = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  prenderLuzSiMovimiento();
}

void prenderLuzSiMovimiento() {
  if (digitalRead(sensor) == HIGH) {
    digitalWrite(led, HIGH);
    delay(100);
  } else {
    digitalWrite(led, LOW);
    delay(100);
  }
}