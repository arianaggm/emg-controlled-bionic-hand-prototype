#include <Servo.h>

Servo myservo; //llamando al servo
int pos = 0; //posición inicial pulgar
int EMG = 0;

void setup() {
myservo.attach(3);
Serial.begin(9600);
}

void loop() {
EMG = analogRead(A1);
Serial.print(EMG);
Serial.print(",");
Serial.print(400);
Serial.print(",");
Serial.println(0);
if (EMG>250) //si la fuerza es menor que 300, mantenga abierta la mano
{
myservo.write(180); //mano tensada 
delay (100);
}

else //si la fuerza es mayor que 300, mantenga cerrada la mano
{
myservo.write(50); //muñeca relaxada
delay (100);
}
}



//EMG Mano

/*
Servo myservo2; //llamando al servo
int pos2 = 0; //posición inicial indice
Servo myservo3; //llamando al servo
int pos3 = 0; //posición inicial medio
Servo myservo4; //llamando al servo
int pos4 = 0; //posición inicial anular
Servo myservo5; //llamando al servo
int pos5 = 0; //posición inicial meñique

//llamar y graficar la señal
int EMG = A0; //amplificador de instrumentación
int lecturaEMG = 0;
int EMG2 = A1; //salida común, salida de electromiografía
int lecturaEMG2 = 0;
int EMG3 = A2; //circuito map
int lecturaEMG3 = 0;

void setup()
{
  Serial.begin(9600), //velocidad de la grafica

myservo2.attach(5);
myservo3.attach(6);
myservo4.attach(9);
myservo5.attach(10);

myservo.write(129); //pulgar
myservo2.write(150); //indice
myservo3.write(150); //medio
myservo4.write(150); //anular
myservo5.write(150); //meñique

delay(2000);
}

void loop()
{
  {
lecturaEMG = analogRead(EMG);
Serial.print (lecturaEMG);
Serial.print(",");
lecturaEMG2 = analogRead(EMG2);
Serial.print (lecturaEMG2);
Serial.print(",");
lecturaEMG3 = analogRead(EMG3);
Serial.print (lecturaEMG3);
Serial.print(",");
Serial.println(analogRead(A1)); //imprimir la grafica
  }

if (lecturaEMG3<=300) //si la fuerza es menor que 300, mantenga abierta la mano
{
myservo.write(129); //pulgar
myservo2.write(150); //indice
myservo3.write(150); //medio
myservo4.write(150); //anular
myservo5.write(150); //meñique

delay (1);
}

else //si la fuerza es mayor que 300, mantenga cerrada la mano
{
myservo.write(50); //pulgar
myservo2.write(10); //indice
myservo3.write(10); //medio
myservo4.write(10); //anular
myservo5.write(10); //meñique

delay (1000);
}
}
*/ 
