const int buttonPin1 = 10;
const int buzzerPin = 9;

int L2 = 2;
int L3 = 3;
int L4 = 4;
int L5 = 5;
int L6 = 6;
int L7 = 7;
int L8 = 8;

long randnumber2;
long randnumber3;
long randnumber4;
long randnumber5;
long randnumber6;
long randnumber7;
long randnumber8;
int randnumbersayi;

int Mi = 330;
int Do = 523;
int puan = 0;
void setup(){
pinMode(buttonPin1, INPUT);
pinMode(buzzerPin, OUTPUT);

pinMode(L2, OUTPUT);
pinMode(L3, OUTPUT);
pinMode(L4, OUTPUT);
pinMode(L5, OUTPUT);
pinMode(L6, OUTPUT);
pinMode(L7, OUTPUT);
pinMode(L8, OUTPUT);
}

boolean handle_button()
{
  int button_pressed = digitalRead(buttonPin1); // pin low -> pressed
  return button_pressed;
}

void loop(){
int buttonState10 = digitalRead(buttonPin1);

delay(1000);


randnumber2 = random(3,5);
randnumber3 = random(3,5);
randnumber4 = random(3,5);
randnumber5 = random(3,5);
randnumber6 = random(3,5);
randnumber7 = random(3,5);
randnumber8 = random(3,5);

randnumbersayi = (randnumber2+randnumber3+randnumber4+randnumber5+randnumber6+randnumber7+randnumber8)%2;

 
   if(randnumber2 == 3){
     digitalWrite(L2, HIGH);      
}  
   if(randnumber3 == 3){
     digitalWrite(L3, HIGH);      
}  
   if(randnumber4 == 3){
     digitalWrite(L4, HIGH);      
}  
   if(randnumber5 == 3){
     digitalWrite(L5, HIGH);      
}  
   if(randnumber6 == 3){
     digitalWrite(L6, HIGH);      
} 
   if(randnumber7 == 3){
     digitalWrite(L7, HIGH);      
}
   if(randnumber8 == 3){
     digitalWrite(L8, HIGH);      
}

delay(1000);

digitalWrite(L2, LOW);
digitalWrite(L3, LOW);
digitalWrite(L4, LOW);
digitalWrite(L5, LOW);
digitalWrite(L6, LOW);
digitalWrite(L7, LOW);
digitalWrite(L8, LOW);

 boolean button_pressed = handle_button();

 if(puan>3) {
    tone(buzzerPin,Mi);
    delay(3000);    
    noTone(buzzerPin);
  }  
else if(button_pressed && randnumbersayi != 0 && puan < 3 ){
    tone(buzzerPin,Mi);
    delay(100);
    tone(buzzerPin,Do);
    delay(100);     
    noTone(buzzerPin);
    puan+=1;
}
  else if(button_pressed && randnumbersayi != 1 < 3){
    tone(buzzerPin,Mi);
    delay(100);     
    noTone(buzzerPin);
    puan-=1;     
}
}
