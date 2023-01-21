//////////////
// EDIVÂNIA //
//   UFPI   //
//   2023   //
//////////////

// Pino usado para disparar os pulsos do sensor
#define PinTrigger  3 
// Pino usado para ler a saida do sensor
#define PinEcho  	4 
// Pino usado para o Buzzer (PWM)
#define PinBuzzer 	A0

float TempoEcho = 0;

// Em metros por segundo
const float VelocidadeSom_mpors = 340.29; 
// Em metros por microsegundo
const float VelocidadeSom_mporus = 0.000340; 

///////////////////////////
// Configuração do setup //
///////////////////////////

void setup()
{
  // Configuração do pino TRIG como saída
  // Inicializado em nível baixo
  pinMode(PinTrigger, OUTPUT);
  digitalWrite(PinTrigger, LOW);
  
  // Configuração do pino ECHO como entrada
  pinMode(PinEcho, INPUT); 
  
  // Configuração do pino do Buzzer como saída
  pinMode(PinBuzzer, OUTPUT);
  analogWrite(PinBuzzer, LOW);

  // Inicializa a porta serial
  Serial.begin(9600);
}

//////////////////////////////////////
// Função que envia o pulso de TRIG //
//////////////////////////////////////

void DisparaPulsoUltrassonico()
{
  // Para fazer o HC-SR04 enviar um pulso ultrassonico, nos temos
  // que enviar para o pino de trigger um sinal de nivel alto
  // com pelo menos 10us de duração
  digitalWrite(PinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(PinTrigger, LOW);
}

//////////////////////////////////////////////
// Função que calcula a distância em metros //
//////////////////////////////////////////////

float CalculaDistancia(float tempo_us)
{
  return((tempo_us*VelocidadeSom_mporus)/2);
}

////////////////////////////////////////////
// Função que controla o volume do Buzzer //
////////////////////////////////////////////

void Tocar(float distancia)
{
  
  float conversao = 0;
  conversao = map(distancia, 2.2, 331, 255, 0); // Regra de 3
  tone(PinBuzzer, conversao, 500);
  delay(conversao*1.3);
  noTone(PinBuzzer);
}

//////////////////////
// FUNÇÃO PRINCIPAL //
//////////////////////

void loop()
{
  // Envia pulso para disparar o sensor
  DisparaPulsoUltrassonico();
  
  // Mede o tempo de duração do sinal no pino de leitura(us)/entrada
  TempoEcho = pulseIn(PinEcho, HIGH);
  
  if((CalculaDistancia(TempoEcho)*100 >= 2.20) &&(CalculaDistancia(TempoEcho)*100 <= 331.00))
  {
    Tocar(CalculaDistancia(TempoEcho)*100);
    
    Serial.print("Distancia em metros: ");
    Serial.print(CalculaDistancia(TempoEcho));
    Serial.print(", Distancia em centimetros: ");
    Serial.println(CalculaDistancia(TempoEcho)*100);
  }
  
  else
  {
    Serial.println("Fora de alcance!");
    analogWrite(PinBuzzer,0);
  }
}
