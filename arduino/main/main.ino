const int RED = 2;
const int YELLOW = 4;
const int GREEN = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  digitalWrite(RED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(8000);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(3000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}
