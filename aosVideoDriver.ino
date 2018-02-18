#include "TVout.h"
#include "fontALL.h"

#define VERSION "2.0.3"

TVout TV;

void setup() {
  Serial.begin(600);
  
  TV.begin(PAL, 120, 96);

  TV.select_font(font4x6);
  TV.println("AOS RCA Video Controller");
  TV.print("Version ");
  TV.println(VERSION);
  TV.println("Ready to read serial.");
  TV.println("\nIf you can read this, the \nprimary controller may not\nbe connected correctly.");
}

boolean firstByte = true;

void loop() {
  readStr();
}

/*
 * Character 0x05 asks if the video controller is there
 */
void readStr() {
  if (Serial.available() > 0) {
    if (firstByte) {
      TV.clear_screen();
      firstByte = false;
    }
    
    char incoming = Serial.read();
    if (incoming == 5) {
      Serial.write(6);
    } else {
      TV.print(incoming);
    }
  }
}

