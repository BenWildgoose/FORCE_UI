void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(5,LOW);
  digitalWrite(2,HIGH);
  Serial.print("0 0: ");Serial.print(analogRead(A0));Serial.print(" | ");
  Serial.print("0 1: ");Serial.print(analogRead(A1));Serial.print(" | ");
  Serial.print("0 2: ");Serial.print(analogRead(A2));Serial.print(" | ");
  Serial.print("0 3: ");Serial.println(analogRead(A3));
  delay(100);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  Serial.print("1 0: ");Serial.print(analogRead(A0));Serial.print(" | ");
  Serial.print("1 1: ");Serial.print(analogRead(A1));Serial.print(" | ");
  Serial.print("1 2: ");Serial.print(analogRead(A2));Serial.print(" | ");
  Serial.print("1 3: ");Serial.println(analogRead(A3));
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  Serial.print("2 0: ");Serial.print(analogRead(A0));Serial.print(" | ");
  Serial.print("2 1: ");Serial.print(analogRead(A1));Serial.print(" | ");
  Serial.print("2 2: ");Serial.print(analogRead(A2));Serial.print(" | ");
  Serial.print("2 3: ");Serial.println(analogRead(A3));
  delay(100);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.print("3 0: ");Serial.print(analogRead(A0));Serial.print(" | ");
  Serial.print("3 1: ");Serial.print(analogRead(A1));Serial.print(" | ");
  Serial.print("3 2: ");Serial.print(analogRead(A2));Serial.print(" | ");
  Serial.print("3 3: ");Serial.println(analogRead(A3));
  delay(100);
}
