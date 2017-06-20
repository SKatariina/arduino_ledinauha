#include <Adafruit_NeoPixel.h>
#define PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(62, PIN, NEO_GRB + NEO_KHZ800);
int x=0;
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
}

uint32_t white = strip.Color(255,255,255);
uint32_t green = strip.Color(0,255,0);
uint32_t colors[2]= {white,green}; 
uint32_t pink = strip.Color(255, 0, 97);
uint32_t turkoosi = strip.Color(8, 255, 215);
uint32_t violetti = strip.Color(255, 0, 255);
uint32_t nothing = strip.Color(0, 0, 0);
uint32_t yellow =strip.Color (255, 255, 0);
uint32_t pink2 = strip.Color (255, 0, 39);
uint32_t orange = strip.Color (255, 127, 0);
uint32_t red = strip.Color (255, 0, 0);
uint32_t blue = strip.Color (0,0, 255);
uint32_t black = strip.Color (11,11,11);
uint32_t violetpink = strip.Color (225, 0, 200);
uint32_t lighwhite = strip.Color(255, 255, 255);
uint32_t sarja[5] = {yellow , pink2, orange,turkoosi, violetti};
uint32_t kirkassininen = strip.Color(0, 255, 255);
uint32_t valkoturkoosi[2] = {lighwhite, kirkassininen};

void loop()
  // put your main code here, to run repeatedly:
  {
  for (int i=0;i<62;i++){
  strip.setPixelColor(i-1,white);
  strip.setPixelColor(i,pink);
  strip.setPixelColor(i-4,nothing);
  strip.setPixelColor(i-2, violetti);
  strip.setPixelColor(i-3, turkoosi); 
  strip.setPixelColor(i-8 ,pink);
  strip.setPixelColor(i-9, nothing);
  strip.setPixelColor(i-11, white); 
  strip.setPixelColor(i-12, nothing);
  strip.setPixelColor(i-14, violetti);
  strip.setPixelColor(i-15, nothing);
  strip.setPixelColor(i-17, turkoosi);
  strip.setPixelColor(i-18, nothing);
  strip.show();
  delay(200);
  }
  
  for (int i=0;i<62;i++){
  strip.setPixelColor(i,nothing);
  strip.show();
  }
  
  
 
for (int i=0;i<x+5;i++){
   strip.setPixelColor(i,pink);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=5;

}
for (int i=5;i<x+5;i++){
    strip.setPixelColor(i, green);
  
  strip.show();
  delay(150);
  x++;
  if (x=1)x=10;
}

  
for (int i=10;i<x+5;i++){
  strip.setPixelColor(i, violetti);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=15;
}

  
for (int i=15;i<x+5;i++){
  strip.setPixelColor(i, blue);
  
  strip.show();
  delay(150);
  x++;
  if (x=1)x=20;
}
for (int i=20;i<x+5;i++){
    strip.setPixelColor(i, yellow);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=25;
}

for (int i=25;i<x+5;i++){
   strip.setPixelColor(i, red);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=30;
}
for (int i=30;i<x+5;i++){
   strip.setPixelColor(i, orange);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=35;
}

for (int i=35;i<x+5;i++){
   strip.setPixelColor(i, violetpink);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=40;
}

for (int i=40;i<x+5;i++){
   strip.setPixelColor(i, white);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=45;
}
for (int i=45;i<x+5;i++){
   strip.setPixelColor(i, black);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=50;
}
for (int i=50;i<x+5;i++){
   strip.setPixelColor(i, turkoosi);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=50;
}  

for (int i=0;i<x+5;i++){
   strip.setPixelColor(i, turkoosi);
   
  strip.show();
  delay(150);
  x++;
  if (x=1)x=0;
}
  
 for (int i=0;i<62;i++){
strip.setPixelColor(i,pink);
  strip.show();
  delay(100);
  }

  for (int i=0;i<62;i++){
    strip.setPixelColor(i,sarja[i%5]);
    strip.show();
    delay(150);}

  {
 for (int i=0;i<62;i++) {
 strip.setPixelColor(i-2,white);
  strip.setPixelColor(i,pink); 
  strip.setPixelColor(i-10, violetti); 
  strip.setPixelColor(i-12, white); 
  strip.setPixelColor(i-20, pink);
  strip.setPixelColor(i-22, white);
  strip.show();
  delay(100);}
  }
  {
  
  for (int i=0;i<62;i++){
    strip.setPixelColor(i,valkoturkoosi[i%2]);
    strip.show();
    delay(50);}
  }
  for (int i=0;i<62;i++){
    strip.setPixelColor (i, nothing);
    strip.show();
    delay(50);}
  }

