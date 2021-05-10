
// the setup function runs once when you press reset or power the board
const int buttonPin=2;
const int ledPin=13;
int buttonState=0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output:
   pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
    int buttonState=digitalRead(buttonPin);
    if(buttonState==HIGH){
      digitalWrite(ledPin,LOW);
       Serial.println("0");
    }
    else{
      digitalWrite(ledPin,HIGH);
      Serial.println("1");
    }
   // Serial.println(buttonState);
    delay(100);
}
