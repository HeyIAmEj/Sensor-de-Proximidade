// SENSOR DE PROXIMIDADE UTILIZANDO SENSORES INFRAVERMELHOS REFLEXIVOS
// FEITO POR: EVERTON JOSÉ @heyiamej
// OS ALERTAS PODEM SER SUBSTITUIDOS POR UM BUZZER QUE AUMENTA O SOM AO CHEGAR NO LIMITE

int sensor1 = 7;
int sensor2 = 6;
int sensor3 = 5;
int sensor4 = 4;

int alerta1 = 9;
int alerta2 = 10;
int alerta3 = 11;
int alerta4 = 12;

void setup() {
pinMode(alerta1, OUTPUT);
pinMode(alerta2, OUTPUT);
pinMode(alerta3, OUTPUT);
pinMode(alerta4, OUTPUT);

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);

}

void loop() {
  if(digitalRead(sensor1) == 0){
    digitalWrite(alerta1, HIGH);
  }else{
    digitalWrite(alerta1, LOW);
  }
  
  if(digitalRead(sensor2) == 0){
    digitalWrite(alerta2, HIGH);
  }else{
    digitalWrite(alerta2, LOW);
  }
  
  if(digitalRead(sensor3) == 0){
    digitalWrite(alerta3, HIGH);
  }else{
    digitalWrite(alerta3, LOW);
  }
  
  if(digitalRead(sensor4) == 0){
    digitalWrite(alerta4, HIGH);
  }else{
    digitalWrite(alerta4, LOW);
  }

}
