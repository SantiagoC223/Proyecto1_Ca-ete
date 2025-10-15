void setup() {
  Serial.begin(9600);

  int a = 20;
  int b = 5;

  if (esMultiplo(a, b)) {
    Serial.println("Son Multiplos");
  } else {
    Serial.println("No son Multiplos");
  }
}

void loop() {
}

bool esMultiplo(int x, int y) {
  return (x % y == 0);
}