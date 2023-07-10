
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

Adafruit_7segment matrix = Adafruit_7segment();  

void setup() {
  matrix.begin(0x70);  // Initialize the LED backpack with the I2C address 0x70
}

void loop() {
  // Display numbers from 0 to 9 on the LED display
  for (int i = 0; i < 10; i++) {
    matrix.print(i);  // Print the number on the display
    matrix.writeDisplay();  // Update the LED display
    delay(1000);  // Delay for 1 second before displaying the next number
  }
}
