int led = 13;
int led2 = 10;
int led3 = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(500);

  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);

  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
  delay(1000);
}
