void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  Serial.print("5 0: ");Serial.println(analogRead(A0));
  Serial.print("5 1: ");Serial.println(analogRead(A1));  
  delay(100);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  Serial.print("6 0: ");Serial.println(analogRead(A0));
  Serial.print("6 1: ");Serial.println(analogRead(A1));
  delay(100);
}
