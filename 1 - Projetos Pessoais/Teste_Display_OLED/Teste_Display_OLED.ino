//#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif12pt7b.h>
#include <Fonts/FreeSansOblique24pt7b.h>

Adafruit_SSD1306 display(-1);

void setup()   
{                
  // Inicializa com o I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
}

void loop() {
  // Limpa o display
  display.clearDisplay();

  // Texto no display
  display.setTextSize(1); // Fonte do texto
  display.setTextColor(WHITE); // Cor do texto
  display.setCursor(0,10); // Posiciona o cursor
  display.println("Display OLED"); // Imprime mensagem
  display.display();
  delay(2000);
  display.clearDisplay();

  // Mudar a fonte
  display.setFont(&FreeSansOblique24pt7b); // Muda a fonte
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.println("OLED");
  display.display();
  delay(2000);
  display.clearDisplay();
  display.setFont(); // Retorna para a fonte normal

  // Texto invertido no display
  display.setTextColor(BLACK, WHITE); // Cores do texto 'invertido'
  display.setCursor(0,10);
  display.println("Display OLED");
  display.display();
  delay(2000);
  display.clearDisplay();

  // Muda o tamanho da fonte
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.setTextSize(3); // Tamanho da fonte: 3
  display.println("Arduino");
  display.display();
  delay(2000);
  display.clearDisplay();

  // Números no display
  display.setTextSize(2);
  display.setCursor(0,10);
  display.println(314159265); // Números
  display.display();
  delay(2000);
  display.clearDisplay();

  // Imprime caractteres ASCII no display
  display.setCursor(0,10);
  display.setTextSize(3);
  display.write(1); // Caracter ASCII
  display.setCursor(20,10);
  display.write(2);
  display.setCursor(40,10);
  display.write(3);
  display.setCursor(60,10);
  display.write(4);
  display.setCursor(80,10);
  display.write(5);
  display.setCursor(100,10);
  display.write(6);
  display.setCursor(0,35);
  display.write(7);
  display.setCursor(20,35);
  display.write(8);
  display.setCursor(40,35);
  display.write(9);
  display.setCursor(60,35);
  display.write(11);
  display.setCursor(80,35);
  display.write(12);
  display.setCursor(100,35);
  display.write(14);
  display.display();
  delay(4000);
  display.clearDisplay();

  // Movimenta o texto sobre a tela
  display.setCursor(0,5);
  display.setTextSize(1);
  display.println("Texto");
  display.println("em");
  display.println("movimento!");
  display.display();
  display.startscrollright(0x00, 0x0f); // Movimenta texto para a direita
  delay(7000);
  display.stopscroll();
  delay(1000);
  display.startscrollleft(0x00, 0x0f); // Movimenta texto para a esquerda
  delay(7000);
  display.stopscroll();
  delay(1000);
  display.clearDisplay();
  delay(500);

//-----------------------------------------------------------------------------------------------------------

  // Pixel
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Pixel");
  display.drawPixel(64, 32, WHITE); // Pixel: Coordenada X, coordenada Y, cor
  display.display();
  delay(2000);
  display.clearDisplay();

  // Linha
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Linha");
  display.drawLine(0, 20, 127, 60, WHITE); // Linha: Coordenada x e y do começo da linha, coordenada x e y do final da linha, cor
  display.display();
  delay(2000);
  display.clearDisplay();

  // Retângulo
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Retangulo");
  display.drawRect(0, 17, 60, 40, WHITE); // Retângulo vazio: Coordenada X, coordenada Y, largura, altura e cor
  display.fillRect(64, 17, 60, 40, WHITE); // Retângulo cheio: Coordenada X, coordenada Y, largura, altura e cor
  display.display();
  delay(2000);
  display.clearDisplay();

  // Retângulo com borda arredondada
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Borda arredondada");
  display.drawRoundRect(0, 17, 60, 40, 8, WHITE); // Retângulo com borda arredondada: mesmos parâmetros do retângulo
  display.fillRoundRect(64, 17, 60, 40, 8, WHITE); // Retângulo com borda arredondada cheio: mesmos parâmetros do retângulo
  display.display();
  delay(2000);
  display.clearDisplay();

  // Círculo
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Circulo");
  display.drawCircle(20, 37, 20, WHITE); // Círculo: Coordenada X do centro, coordenada Y do centro, raio e cor
  display.fillCircle(84, 37, 20, WHITE); // Círculo cheio: Coordenada X do centro, coordenada Y do centro, raio e cor
  display.display();
  delay(2000);
  display.clearDisplay();

  // Triângulo
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Triangulo");
  display.drawTriangle(30, 17, 0, 62, 60, 62, WHITE); // Triângulo: Pares de coordenadas X e Y nos vértices do topo, a esquerda e a direita, e por fim, a cor do triângulo
  display.fillTriangle(94, 17, 64, 62, 124, 62, WHITE); // Triângulo cheio: Pares de coordenadas X e Y nos vértices do topo, a esquerda e a direita, e por fim, a cor do triângulo
  display.display();
  delay(2000);
  display.clearDisplay();

  // Cores invertidas
  display.invertDisplay(true);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Invertido");
  display.drawCircle(30, 37, 20, WHITE); // Círculo: Coordenada X do centro, coordenada Y do centro, raio e cor
  display.drawRoundRect(64, 17, 60, 40, 8, WHITE); // Retângulo com borda arredondada cheio: mesmos parâmetros do retângulo
  display.display();
  delay(3000);
  display.clearDisplay();
  display.invertDisplay(false);
}
