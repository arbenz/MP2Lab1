#define LEDG 23
#define LEDR 25
#define LEDY 27
const int buzzer = 29; 
const int buttonPin = 18;
int buttonState = 0;
int go = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDG, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDY, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), blink, HIGH); 

}

void beep(){
    for( int i = 0; i < 3; i++){
      tone(buzzer, 1000, 500);
      delay(1000);
    }
}

void loop() {
  // put your main code here, to run repeatedly:

    while(go == 1){
      // turn LED on:
      digitalWrite(LEDR, HIGH); // Turn the LED on
      delay(17000);
      beep();
      digitalWrite(LEDR,LOW);
      digitalWrite(LEDG, HIGH); // Turn the LED on
      delay(17000);
      beep();
      digitalWrite(LEDG,LOW);
      digitalWrite(LEDY, HIGH); // Turn the LED on
      delay(17000);
      beep();
      digitalWrite(LEDY,LOW);
    }
    
  digitalWrite(LEDR, HIGH);
  delay(1000);        // ...for 1 sec
  digitalWrite(LEDR, LOW);    
  delay(1000); 

   

}

void blink() {
  go = 1;
}
