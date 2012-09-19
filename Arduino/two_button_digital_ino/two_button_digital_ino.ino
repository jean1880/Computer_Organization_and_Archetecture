// Two light, digital button control
// Coded by: Jean-Luc desroches
// 09/18/2012

// to help familiarize myself with coding for the Arduino boardsystem, in preperation of future classes
// Program allows for the user to turn a pair of lights, on the board, on and off through two buttons

// set the digital positions for the pins used on the breadboard
const int buttonPin1 = 6;      // set the digital poosition of the first pushbutton pin:   
const int buttonPin2 = 5;      // set the digital poosition of the second pushbutton pin
const int ledPin1 =  7;        // set the digital position of the first LED pin
const int ledPin2 = 8;         // set the digital position of the second LED pin

// resets the  digital state of the buttons to off or 0 on each cycle
int buttonState1 = 0; 
int buttonState2 = 0;

void setup() {
  // initialize the LED pins as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);  
  // initialize the pushbutton pins as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);  
}

void loop(){
  // check the current state of the pushbuttons, determine whether state is on, 0 or off, 1:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // set the light status based on the buttons presse
  //if button one is pressed down:
  if (buttonState1 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin1, HIGH);  
  } 
  // if button one is not pressed down:
  else if (buttonState1 == LOW) {
    // turn LED off:
    digitalWrite(ledPin1, LOW); 
  }
  // if button two is pressed down:
  if (buttonState2 == HIGH){
    // turn LED on:
    digitalWrite(ledPin2, HIGH);
  }
  // if button two is not pressed  down:
  else if (buttonState2 == LOW) {
    // turn LED off:
    digitalWrite(ledPin2, LOW);
  }
}
// End of Program
