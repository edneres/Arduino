int led_red = 3, led_blue = 4, led_green = 5;
int bot = 2, es_bot;
int aux = 0;

void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(bot, INPUT);
  
  Serial.begin(6600);
}

void loop()
{
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 0)
  {
    digitalWrite(led_red, HIGH);
    Serial.println("Cor Vermelha");
    aux++;
    delay(1000);
  }
  
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 1)
  {
    digitalWrite(led_red, LOW);
    
    digitalWrite(led_blue, HIGH);
    Serial.print("Cor Azul\n");
    aux++;
    delay(1000);
  }
  
  es_bot = digitalRead(bot);

  if(es_bot == 1 && aux == 2)
  {
    digitalWrite(led_blue, LOW);
    
    digitalWrite(led_green, HIGH);
    Serial.print("Cor Verde\n");
    aux++;
    delay(1000);
  } 
  
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 3)
  {
    digitalWrite(led_green, LOW);
    
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_red, HIGH);
    Serial.print("Cor Roxa\n");
    aux++;
    delay(1000);
  } 
  
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 4)
  {
    digitalWrite(led_red, LOW);
    
    digitalWrite(led_green, HIGH);
    Serial.print("Cor Ciano\n");
    aux++;
    delay(1000);
  } 
  
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 5)
  {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_green, HIGH);
    Serial.print("Cor Branca\n");
    aux++;
    delay(1000);
  }
  
//////////////////////////////////////////
  
  es_bot = digitalRead(bot);
  
  if(es_bot == 1 && aux == 6)
  {
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_green, LOW);
    Serial.print("LED Apagado\n\n");
    aux = 0;
    delay(1000);
  }
  
}