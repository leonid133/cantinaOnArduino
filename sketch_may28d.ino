#include <Buzzer.h>
Buzzer buzzer(7, 10);

void part1() {
  for(int i=0;i<2;i++) {
    buzzer.sound(NOTE_A5, 80);
    buzzer.sound(0, 80);
    buzzer.sound(NOTE_D6, 80);
    buzzer.sound(0, 80);
  }
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(NOTE_D6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_GS5, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 80);
  
}

void part11() {
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(NOTE_GS5, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_FS5, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(NOTE_FS5, 80);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_D5, 80);
  buzzer.sound(0, 320);
}

void part12(){
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_FS5, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_AS5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 80);
}

void part13(){
  buzzer.sound(NOTE_C6, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C6, 120);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(NOTE_G5, 60);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F5, 120);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_D5, 160);
  buzzer.sound(0, 320);
}

void part14(){
  buzzer.sound(NOTE_D5, 160);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_F5, 160);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_A5, 150);
  buzzer.sound(0, 160);
  buzzer.sound(NOTE_C6, 120);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_DS6, 120);
  buzzer.sound(0, 10);
  buzzer.sound(NOTE_D6, 70);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_GS5, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 40);
  buzzer.sound(NOTE_F5, 160);
  buzzer.sound(0, 320);
}

void part2(){
  for(int i=0;i<2;i++) {
   buzzer.sound(NOTE_A5, 80);
   buzzer.sound(0, 60);
   buzzer.sound(NOTE_F5, 80);
   buzzer.sound(NOTE_A5, 80);
   buzzer.sound(0, 240);
  }
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 60);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 40);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 80);
}

void part21(){
  buzzer.sound(NOTE_F5, 100);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_D5, 100);
  buzzer.sound(0, 160);
}

void part22(){
  buzzer.sound(NOTE_G5, 100);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C5, 100);
  buzzer.sound(0, 160);
}

void part3(){
  for(int i=0;i<3;i++) {
    buzzer.sound(NOTE_F5, 80);
    buzzer.sound(0, 80);
    buzzer.sound(NOTE_GS5, 80);
    buzzer.sound(NOTE_G5, 80);
    buzzer.sound(0, 80);
    buzzer.sound(NOTE_GS5, 40);
    buzzer.sound(NOTE_G5, 40);
    buzzer.sound(NOTE_GS5, 80);
    buzzer.sound(0, 80);
  }
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 60);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(NOTE_F5, 40);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 320);
  
}

void part4(){
  buzzer.sound(NOTE_C5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_E5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_G5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F5, 160);
  buzzer.sound(NOTE_F5, 160);
  buzzer.sound(0, 160);
}

void part41(){
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(NOTE_G5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 320);
}

void part42(){
  buzzer.sound(NOTE_E5, 80);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_F5, 80);
  buzzer.sound(0, 320);
}

void part5(){
  buzzer.sound(NOTE_AS5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_B5, 160);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_C6, 160);
  buzzer.sound(0, 10);
  buzzer.sound(NOTE_D6, 160);
  buzzer.sound(0, 80);  
  buzzer.sound(NOTE_DS6, 120);
  buzzer.sound(0, 10);
  buzzer.sound(NOTE_D6, 70);
  buzzer.sound(0, 80);
  buzzer.sound(NOTE_GS5, 80);
  buzzer.sound(NOTE_A5, 80);
  buzzer.sound(0, 40);
  buzzer.sound(NOTE_F5, 160);
  buzzer.sound(0, 320);
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
  for(int i=0;i<50;i++){
    play();
  }
}

void loop() {
 
}
