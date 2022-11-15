// Reto Cómputo Cognitivo
// Elaborado por el Equipo 1
// Leonardo Javier Nava Castellanos
// Arturo Cueto Acosta
// Rodolfo Sebastián Figueroa Hernandez
// Daniel Ham Vargas

const int stepPin = 4;
const int dirPin = 5; 

int customDelay;
 
void setup() {
  
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  digitalWrite(dirPin,HIGH); 
}
void loop() {
  
  customDelay = 1800;
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(customDelay);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(customDelay);
}
