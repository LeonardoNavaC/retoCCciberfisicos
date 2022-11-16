#include <Servo.h>
 
// Declaramos la variable para controlar el servo
int pushButton = 3;
bool state = HIGH;
const int stepPin = 5;
const int dirPin = 4; 
int customDelay;
Servo servoMotor;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
  servoMotor.write(90); 
  pinMode(3, INPUT);
  pinMode(stepPin,OUTPUT); //Nofunciona jeje
  pinMode(dirPin,OUTPUT);
  digitalWrite(dirPin,HIGH); 
  
}
 
void loop() {
  
  //Serial.println(digitalRead(pushButton));
  
  if (digitalRead(pushButton)){
    // Desplazamos a la posición 90º
    state = HIGH;
  }
  else {
    // Desplazamos a la posición 180º
    state = LOW;
  }

  if (state == HIGH){
    //customDelay = 2500;
    //digitalWrite(stepPin, HIGH);
    //delayMicroseconds(customDelay);
    //digitalWrite(stepPin, LOW);
    //delayMicroseconds(customDelay); 
    servoMotor.write(90);  
  }
  else if (state == LOW){
    servoMotor.write(180);
    
  }
  customDelay = 5000;
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(customDelay);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(customDelay);

}
