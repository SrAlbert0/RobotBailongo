//@author Alberto Salvador
//A día de hoy se emplean las librerias: Servo
#include <Servo.h>

Servo servRL;
Servo servLL;
Servo servRF;
Servo servLF;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Pierna derecha
  servRL.attach(3);
  //Pierna izquierda
  servLL.attach(2);
  //Pie derecho
  servRF.attach(5);
  //Pie izquierdo
  servLF.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Centramos las patitas
  centerLegs();

  delay(3000);
}

void centerLegs(){
  servRL.write(90);
  servLL.write(90);
  servRF.write(90);
  servLF.write(90);
}
