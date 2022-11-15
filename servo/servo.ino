#include <Servo.h>
 
// Declaramos la variable para controlar el servo
int pushButton = 3;
bool state = HIGH;
Servo servoMotor;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
  pinMode(3, INPUT);
  
}
 
void loop() {
  
  Serial.println(digitalRead(pushButton));
  
  if (digitalRead(pushButton)){
    // Desplazamos a la posición 90º
    state = HIGH;
  }
  else {
    // Desplazamos a la posición 180º
    state = LOW;
  }

  if (state == HIGH){
    servoMotor.write(90);  
  }
  else if (state == LOW){
    servoMotor.write(180);  
  }
  delay(100);
}
