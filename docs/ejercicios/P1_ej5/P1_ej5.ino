int tiempo = 200;
int i;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(4, INPUT);
}

void secuencia(int t){
  for(i=5; i<=8; i++)
      digitalWrite(i, LOW);
  
   for(i=5; i<=8; i++){
      digitalWrite(i, HIGH);
      delay(t);
      digitalWrite(i, LOW);
      delay(t);
   }
  }

void loop() {
  if(digitalRead(4) == HIGH)
    secuencia(tiempo);
}
