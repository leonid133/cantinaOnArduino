#define timing 7
#include <Buzzer.h>
Buzzer buzzer(7, 10);

void part1() {
  for(int i=0;i<2;i++) {
    buzzer.sound(NOTE_A5, 8*timing);
    buzzer.sound(0, 8*timing);
    buzzer.sound(NOTE_D6, 8*timing);
    buzzer.sound(0, 8*timing);
  }
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(NOTE_D6, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_GS5, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 8*timing);
  
}

void part11() {
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(NOTE_GS5, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_FS5, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(NOTE_FS5, 8*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(0, 16*timing);
  buzzer.sound(NOTE_D5, 8*timing);
  buzzer.sound(0, 32*timing);
}

void part12(){
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(0, 16*timing);
  buzzer.sound(NOTE_FS5, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_C6, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_AS5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(0, 8*timing);
}

void part13(){
  buzzer.sound(NOTE_C6, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_C6, 12*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(NOTE_G5, 6*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_F5, 120);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_D5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part14(){
  buzzer.sound(NOTE_D5, 16*timing);
  buzzer.sound(0, 16*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(0, 16*timing);
  buzzer.sound(NOTE_A5, 15*timing);
  buzzer.sound(0, 16*timing);
  buzzer.sound(NOTE_C6, 12*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_DS6, 12*timing);
  buzzer.sound(0, 1*timing);
  buzzer.sound(NOTE_D6, 7*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_GS5, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 4*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part2(){
  for(int i=0;i<2;i++) {
   buzzer.sound(NOTE_A5, 8*timing);
   buzzer.sound(0, 6*timing);
   buzzer.sound(NOTE_F5, 8*timing);
   buzzer.sound(NOTE_A5, 8*timing);
   buzzer.sound(0, 24*timing);
  }
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 6*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 4*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 8*timing);
}

void part21(){
  buzzer.sound(NOTE_F5, 10*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_D5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part22(){
  buzzer.sound(NOTE_G5, 10*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_C5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part3(){
  for(int i=0;i<3;i++) {
    buzzer.sound(NOTE_F5, 8*timing);
    buzzer.sound(0, 8*timing);
    buzzer.sound(NOTE_GS5, 8*timing);
    buzzer.sound(NOTE_G5, 8*timing);
    buzzer.sound(0, 8*timing);
    buzzer.sound(NOTE_GS5, 8*timing);
    buzzer.sound(NOTE_G5, 8*timing);
    buzzer.sound(NOTE_GS5, 8*timing);
    buzzer.sound(0, 4*timing);
  }
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(0, 32*timing);
  
}

void part4(){
  buzzer.sound(NOTE_C5, 16*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_E5, 16*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_G5, 16*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(0, 16*timing);
}

void part41(){
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(NOTE_G5, 8*timing);
  buzzer.sound(NOTE_A5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part42(){
  buzzer.sound(NOTE_E5, 8*timing);
  buzzer.sound(NOTE_F5, 8*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void part5(){
  buzzer.sound(NOTE_AS5, 16*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_B5, 16*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_C6, 16*timing);
  buzzer.sound(0, 1*timing);
  buzzer.sound(NOTE_D6, 16*timing);
  buzzer.sound(0, 8*timing);  
  buzzer.sound(NOTE_DS6, 12*timing);
  buzzer.sound(0, 1*timing);
  buzzer.sound(NOTE_D6, 7*timing);
  buzzer.sound(0, 8*timing);
  buzzer.sound(NOTE_GS5, 8*timing);
  buzzer.sound(NOTE_A5, 8*timing);
  buzzer.sound(0, 4*timing);
  buzzer.sound(NOTE_F5, 16*timing);
  buzzer.sound(0, 32*timing);
}

void melody(){
  part1();
  part11();
  part1();
  part12();
  part1();
  part13();
  part14();
  part2();
  part21();
  part2();
  part22();
  part2();
  part21();
  part14();
  part14();
  part3();
  part4();
  part41();
  part4();
  part42();
  part4();
  part41();
  part5();
  part5();
}

void play(){
  buzzer.begin(100);
  melody();
  buzzer.end(2000);
}

void setup() {
//  for(int i=0;i<50;i++){
//    play();
//  }
}

void loop() {
 play();
}
