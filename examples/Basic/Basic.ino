#include <LM35.h>

int pinoSensor = A0; //Pino analógico em que estará conectado o sensor LM35

LM35Sensor lm35;

void setup() { 
  Serial.begin(9600); //Iniciando Serial
}

void loop() {
  lm35.read(pinoSensor);
  Serial.println(lm35.getCelsius()); // Devolve no console a temperatura em Celsius
  delay(1000);// Espera um tempo determinado em ms
}
