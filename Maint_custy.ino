//This DigiSpark script opens a powershell window and optimizes the C Drive and then runs disk cleanup.
//May need additional tweaking for the radio buttons for cleanmgr options.
//Tested on Windows 10 with English(US) keyboard layout
//Created by CIVILKMKZ
#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_TAB     43
#define KEY_DOWN_ARROW 0x51
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  DigiKeyboard.print("Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1800);
  DigiKeyboard.print("Optimize-Volume -DriveLetter C -Analyze -Verbose");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cleanmgr /sageset:17");
  DigiKeyboard.delay(1300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //1
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //2
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //3
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //4
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //5
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //6 //no radio toggle
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //1 //no radio toggle 
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //2
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //3
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //4
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //5
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //6
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //1
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //2
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //3
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //4
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //5
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW); //6
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cleanmgr /sagerun:17");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
}

void loop() {
}
