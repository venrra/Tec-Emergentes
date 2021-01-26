#include <NewPing.h>
#include <NewTone.h>


//Constanstes de Buzzer
#define PINBUZZER 42
#define FRECUENCIA_MIN 131
#define FRECUENCIA_MAX 4192

//Sensor distancia ultrasonido
//Estructura para sensor distancia un par que representa los pines ECHO y TRIGGER
struct SonarPins{
        uint8_t TRIGGER_PIN;
        uint8_t ECHO_PIN;
};

//Inicializar los sensores
SonarPins SONAR1 = {6,5};   //TRIGGER_PIN, ECHO_PIN
SonarPins SONAR2 = {11,10}; //TRIGGER_PIN, ECHO_PIN
SonarPins SONAR3 = {3,2};   //TRIGGER_PIN, ECHO_PIN
#define MAX_DISTANCE 200 

NewPing sonars[3] = {
NewPing(SONAR1.TRIGGER_PIN, SONAR1.ECHO_PIN, MAX_DISTANCE),
NewPing(SONAR2.TRIGGER_PIN, SONAR2.ECHO_PIN, MAX_DISTANCE),
NewPing(SONAR3.TRIGGER_PIN, SONAR3.ECHO_PIN, MAX_DISTANCE)  
};

//Sensor PIR
#define PIRpin 24

int pirState = LOW; //Ultimo Esatdo Anterior de PIR
int pirVal = 0;     //Estado leido de PIR  
  
void setup() 
{ 
    pinMode(PIRpin, INPUT);
    Serial.begin(115200);
 }

void loop()
 {
    
     unsigned int uS [3];
     unsigned int cm[3];
     for(int i=0; i<3;i++){
      uS[i]= sonars[1].ping_median(); // Enviar ping, obtener tiempo de ping en microsegundos uS
      cm[i] = uS[i] / US_ROUNDTRIP_CM;
      String s = "Ping: " + (String)i + ": " + (String)cm[i] + "cm";
      Serial.println(s);   
     }
     int min_cm = min(cm[0],min(cm[1],cm[2]));

     pirVal = digitalRead(PIRpin);
     
     if(min_cm !=0 and pirVal==HIGH){
        pirState = HIGH;
        int frecuencia = FRECUENCIA_MAX-((FRECUENCIA_MAX-FRECUENCIA_MIN)/(MAX_DISTANCE-1)) * min_cm + FRECUENCIA_MIN;
        NewTone(PINBUZZER, frecuencia);
     }else if(min_cm !=0 and pirVal==LOW and pirState == HIGH){
        pirState = LOW;
        int frecuencia = FRECUENCIA_MAX-((FRECUENCIA_MAX-FRECUENCIA_MIN)/(MAX_DISTANCE-1)) * min_cm + FRECUENCIA_MIN;
        NewTone(PINBUZZER, frecuencia);
        delay(1000);
     }else{
        noNewTone(PINBUZZER);
     }
     delay(100);
 }
