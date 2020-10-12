void setup() {
  //Semaforo 1
  pinMode(3,OUTPUT);// Rojo1
  pinMode(4,OUTPUT);// ambar1
  pinMode(5,OUTPUT);// verde1
  
  //Semaforo 2
  pinMode(6,OUTPUT);// Rojo2
  pinMode(7,OUTPUT);// ambar2
  pinMode(8,OUTPUT);// verde2
}

void loop() {
  /* Seceuncia: 
  rojo 1 – verde 2 durante 3segundos, 
  rojo 1 – ambar 2 durante 500 ms, 
  verde 1 – rojo 2 durante 3 segundos,
  ambar 1 - , rojo 2 durante 500 ms.*/

  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(8, HIGH);

  delay(3000);

  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);

  delay(500);

  digitalWrite(7, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

  delay(3000);

  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);

  delay(500);
  
}
