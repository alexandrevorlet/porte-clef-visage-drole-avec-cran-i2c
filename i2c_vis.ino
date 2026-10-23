#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


int X = 10;
int Y = 10;









void setup() {
  // put your setup code here, to run once:


  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for (;;); // Bloquer en cas d'erreur d'initialisation
  }


display.clearDisplay();
display.display();


display.drawCircle(20, 20 , 20, SSD1306_WHITE);
display.drawCircle(100, 20 , 20, SSD1306_WHITE);
carre(40, 40, 1);
}


void carre(int x, int y, int t){
  display.fillRect(x-t, y-t, x, y, SSD1306_WHITE);
  display.display();
}

void neuil(int time){
display.fillCircle(20, 20, 12, SSD1306_WHITE);
display.fillCircle(100, 20, 12, SSD1306_WHITE);
display.display();
delay(time);

display.fillCircle(20, 20, 12, SSD1306_BLACK);
display.fillCircle(100, 20, 12, SSD1306_BLACK);
display.display();
delay(time/10);
}






void loop() {
  // put your main code here, to run repeatedly:
neuil(4000);

}
