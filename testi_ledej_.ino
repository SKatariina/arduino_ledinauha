#include <Adafruit_NeoPixel.h>
#define PIN 9

Adafruit_NeoPixel strip = Adafruit_NeoPixel(62, PIN, NEO_GRB + NEO_KHZ800);
int x=0;
void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
 /*(int i=0;i<40;i++){
    strip.setPixelColor(i,183, 0, 255);
  }
  strip.show();
  delay(10);*/

  for (int i=0;i<62;i++){
  strip.setPixelColor(i-1,0, 0, 0);
  strip.setPixelColor(i,255, 0, 97);
  strip.show();
  delay(200); 
  }

for (int i=0;i<62;i++){
strip.setPixelColor(i-2, 0, 0, 0);
strip.setPixelColor(i, 8, 255, 215);
strip.show();
delay(200);
}
  

for (int i=0;i<x+5;i++){
   strip.setPixelColor(i,255, 0, 97);
   
  strip.show();
  delay(200);
  x++;
  if (x=1)x=5;
}

for (int i=5;i<x+5;i++){
    strip.setPixelColor(i, 0, 255, 0);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=10;
}

  
for (int i=10;i<x+5;i++){
  strip.setPixelColor(i, 255, 0, 255);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=15;

}
  
for (int i=15;i<x+5;i++){
  strip.setPixelColor(i, 0, 0, 255);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=20;
} 

for (int i=20;i<x+5;i++){
    strip.setPixelColor(i, 255, 255, 0);
  
  strip.show();
  delay(200);
  x++;
  if (x=1)x=25;
}

for (int i=25;i<x+5;i++){
   strip.setPixelColor(i, 255, 0, 0);
   
  strip.show();
  delay(200);
  x++;
  if (x=1)x=30;
}
for (int i=30;i<x+5;i++){
   strip.setPixelColor(i, 8, 255, 215);
   
  strip.show();
  delay(200);
  x++;
  if (x=1)x=30;
  }
for (int i=0;i<x+5;i++){
   strip.setPixelColor(i, 8, 255, 215);
   
  strip.show();
  delay(200);
  x++;
  if (x=1)x=0;
}}
  
  
  
 /* for (int i=30;i<35;i++)
  strip.setPixelColor(i, 0, 255, 0);

  strip.show();
  delay(200);

    for (int i=35;i<40;i++)
  strip.setPixelColor(i, 0, 0, 255);

  strip.show();
  delay(200);*/
  
  /*strip.setPixelColor(4, 0, 255, 0);
  strip.show();

  
  strip.setPixelColor (1, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (2, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (3, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (4, 0, 245, 255);
  strip.show();

 
  strip.setPixelColor (5, 255, 0, 255);
  strip.show();

 
  strip.setPixelColor (6, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (7, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (8, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (9, 0, 245, 255);
  strip.show();

  strip.setPixelColor (10, 255, 0, 255);
  strip.show();
  
  strip.setPixelColor (11, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (12, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (13, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (14, 0, 245, 255);
  strip.show();

  strip.setPixelColor (15, 255, 0, 255);
  strip.show();

  strip.setPixelColor (16, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (17, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (18, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (19, 0, 245, 255);
  strip.show();

  strip.setPixelColor (20, 255, 0, 255);
  strip.show(); 
    
  strip.setPixelColor (21, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (22, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (23, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (24, 0, 245, 255);
  strip.show();

  strip.setPixelColor (25, 255, 0, 255);
  strip.show();

  strip.setPixelColor (26, 255, 255, 0);
  strip.show();
   
  strip.setPixelColor (27, 255, 0, 97);
  strip.show();
   
  strip.setPixelColor (28, 255, 127, 0);
  strip.show();
  
  strip.setPixelColor (29, 0, 245, 255);
  strip.show();

  strip.setPixelColor (30, 255, 0, 255);
  strip.show();
  }*/
