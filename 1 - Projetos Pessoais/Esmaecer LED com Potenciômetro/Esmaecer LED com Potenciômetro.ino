//////////////////
//   EDIVÂNIA   //
//     UFPI     //
//   27/01/23   //
//////////////////

#define LED 6
#define pot_pin A0
int valor_pot_pin;

void setup() 
{
  pinMode(LED, OUTPUT);      
  pinMode(pot_pin, INPUT);  
}

void loop()
{
  valor_pot_pin = analogRead(pot_pin);

  map(valor_pot_pin, 0, 1023, 0, 255);

  analogWrite(LED, valor_pot_pin);
  
  delay(10);
}
