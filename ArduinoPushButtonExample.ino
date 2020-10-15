//Set up pins
int buttonPin = 13;
int led1 = 9;
int led2 = 10;

int state = 0; //0 all off, 1 1st, 2 2nd, 3 both;

//setup function
void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

//loop function

void loop(){
  //if button pushed
  if (digitalRead(buttonPin)){
    // add 1 to state
    state += 1;
  }

  //if state = 0 || state >3
  if (state == 0 || state >=4){
    //led1 off
    digitalWrite(led1, LOW);
    //led2 off
    digitalWrite(led2, LOW);
    state  = 0;
  }
  //else if state = 1
  else if (state == 1){
    //led1 on
    digitalWrite(led1, HIGH);
    //led2 off
    digitalWrite(led2, LOW);
  }
  //if state = 2
  else if (state == 2){
    //led1 off
    digitalWrite(led1, LOW);
    //led2 on
    digitalWrite(led2, HIGH);
  }
  //else if state = 3
  else if (state == 3) {
    //led1 on
    digitalWrite(led1, HIGH);
    //led2 on
    digitalWrite(led2, HIGH);
  }
    //delay to give time to let go of buttonPin

  delay(400);

}