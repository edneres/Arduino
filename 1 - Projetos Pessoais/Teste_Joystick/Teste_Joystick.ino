#define eixo_x  A0
#define eixo_y  A1
#define botao   5

void setup() 
{
  pinMode(eixo_x, INPUT);
  pinMode(eixo_y, INPUT);
  pinMode(botao, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() 
{
  Serial.println(analogRead(eixo_x));
  Serial.println(analogRead(eixo_y));
  Serial.println(digitalRead(botao));
  Serial.println("");
  delay(1000);
}
