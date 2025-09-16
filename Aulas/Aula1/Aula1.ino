#define ledAzul 12;
#define ledAmarelo 11;
#define ledVermelho 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAzul, HIGH);
  delay(5000);
  digitalWrite(ledAzul, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(2500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(2500);
}
