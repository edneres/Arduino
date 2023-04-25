#include <SoftwareSerial.h>

SoftwareSerial HC05(10,11); // Rx pino 11, TX pino 10

void setup() 
{
  Serial.begin(115200); 
  HC05.begin(38400);  // Porta serial do HC05
  Serial.println("Envie os comandos AT para configurar o HC05");
}

void loop() 
{
  if(HC05.available())
  {
    while(HC05.available())
    {
      char c = HC05.read(); // Lê os cacteres
      Serial.write(c);      // Escreve os dados nas Serial
    }
  }

  if(Serial.available())
  {
    delay(10);

    String comando = "";

    while(Serial.available())
    {
      comando += (char)Serial.read();
    }

    HC05.println(comando); // Escreve os dados no HC05
  }
}

// SLAVE   +ADDR:19:6:34ea03
