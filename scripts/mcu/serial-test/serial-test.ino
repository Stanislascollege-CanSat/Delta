int x = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("{FNC:sett0;}");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("{GPS:");
  Serial.print(x);
  Serial.print(";AcX:12,33;Hgt:");
  Serial.print(rand() % 5);
  Serial.print(";}");
  x += 1;
  delay(200);
}
