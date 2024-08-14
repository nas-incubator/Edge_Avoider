// Define motor pins
int motorLeftBackward = 5;
int motorLeftForward = 4;

int motorRightBackward = 3;
int motorRightForward = 2;

// Define sensor pins
#define RIGHT_SENSOR 6
#define LEFT_SENSOR 7

void setup() {
  // Set motor pins as output
  pinMode(motorLeftBackward, OUTPUT);
  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
//Speed Control
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  // Set sensor pins as input
  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);
}

void loop() {

  analogWrite(9,50); //right motor rpm
  analogWrite(10,49); //left motor rpm
  
  // Read sensor values
  int leftSensorValue = digitalRead(LEFT_SENSOR);
  int rightSensorValue = digitalRead(RIGHT_SENSOR);
  
  // Determine motor actions based on sensor values
  if (leftSensorValue == HIGH && rightSensorValue == HIGH) {
    
    moveForward(); // Move forward
  } else {
    
    turn(); // turns
  }
}

void moveForward() {
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  
}

void moveBackward()
{
  digitalWrite(motorLeftBackward, HIGH); //move Backward
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorRightBackward, HIGH);
  digitalWrite(motorRightForward, LOW);
  delay(1500);
}

void turn() {
  moveBackward();
  //int randomNumber = random(2);
  digitalWrite(motorLeftBackward, LOW);  //Turn LEFT 
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorRightBackward, LOW);
  digitalWrite(motorRightForward, HIGH); 
  delay(1500);
}





