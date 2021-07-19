#include "Keyboard.h"

int button[]={5,6,7,8,9,10,16,15,14};
int note[]={956,1014,1136,1275,1432,1519,1700,1915};
void setup() {
  for(int i=0;i<9;i++){
  pinMode(button[i], INPUT_PULLUP);
  };
 // Keyboard.begin();
}

void loop() {
  int flag=0;
  for(int i=0;i<9;i++){
  if (digitalRead(button[i]) == 0) {
    Keyboard.press(49 + i);
    tone(2,note[i]);
    delay(150);
    noTone(2);

    Keyboard.releaseAll();
  }
  
  }
  


}
