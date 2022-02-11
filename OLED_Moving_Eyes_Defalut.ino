/******************************************************************************
  Default for C-File Arrays for use with 128x64 OLED by Vin.X.Mod 

  Online Image to C Array Converter at https://lvgl.io/tools/imageconverter
  Adafruit 128x64 OLED Graphic Display https://www.adafruit.com/product/326

  For more information see the wonderful tutorial by Rui Santos
  https://randomnerdtutorials.com/guide-for-oled-display-with-arduino/
******************************************************************************/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


static const unsigned char PROGMEM image_data_FIRSTarray[] = { 
  // FIRST C-File Array
 
};

static const unsigned char PROGMEM image_data_SECONDarray[] = { 
  // SECOND C-File Array 

};

static const unsigned char PROGMEM image_data_THIRDarray[] = { 
  // THIRD C-File Array
   
};

void setup() {
  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
}
 
  delay(2000); // Pause for 2 seconds

  display.clearDisplay();  // Clear the buffer

// Displays FIRSTarray on the screen
  display.drawBitmap(0, 0, image_data_FIRSTarray, 128, 64, 1);
  display.display();
}

void loop() {
// Use Void Loop to display multipule images

  delay(500); // Pause for half second
  display.clearDisplay();  // Clear the buffer

// Displays SECONDarray on the screen
  display.drawBitmap(0, 0, image_data_SECONDarray, 128, 64, 1);
  display.display();

  delay(1500); // Pause for 1.5 seconds
  display.clearDisplay();  // Clear the buffer

// Displays THIRDarray on the screen
  display.drawBitmap(0, 0, image_data_THIRDarray, 128, 64, 1);
  display.display();
}
// End of Arduino Sketch  
