
int s = 100;
int o = 300;
int letra = 300;
int espera = 1000;
int i=0;

void setup() {
  pinMode(13, OUTPUT);
}

void pitidos(int t){
  digitalWrite(13, LOW);
  for(i=0; i<3; i++){
      digitalWrite(13, HIGH);
      delay(t);
      digitalWrite(13, LOW);
      delay(letra);
  }
  delay(letra);
}

void loop() {
  pitidos(s);
  pitidos(o);
  pitidos(s);
  delay(espera);
}
