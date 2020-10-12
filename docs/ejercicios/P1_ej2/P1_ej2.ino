void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(5, HIGH);
   delay(200);
   digitalWrite(6, HIGH);
   delay(200);
   digitalWrite(7, HIGH);
   delay(200);
   digitalWrite(8, HIGH);

   delay(200);

   digitalWrite(5, LOW);
   delay(200);
   digitalWrite(6, LOW);
   delay(200);
   digitalWrite(7, LOW);
   delay(200);
   digitalWrite(8 , LOW);
   delay(200);
}
