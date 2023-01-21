//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

int LED = 13, led = 8, botao = 6,estado_botao = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  estado_botao = digitalRead(botao);
  
  if (estado_botao == 1)	      // estado_botao == 1
  {	
    digitalWrite(LED, HIGH);
    digitalWrite(led, LOW);
  }
  
  else					                // estado_botao == 0
  {
    digitalWrite(LED, LOW);
    digitalWrite(led, HIGH);
  }
}