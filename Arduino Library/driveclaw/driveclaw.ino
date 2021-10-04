int xValue = 0 ; // read value of the X axis  
int yValue = 0 ; // read value of the Y axis  
int bValue = 0 ; // value of the button reading 
int buttonState = 0,lastButtonState = 0,motor1pin1 = 2,motor1pin2 = 3,motor2pin1 = 4,motor2pin2 = 5;

void setup()  
{ 
  Serial.begin(9600) ; // Open the serial port
  pinMode(9,INPUT) ; // Configure Pin 2 as input
  digitalWrite(9,HIGH); 
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
} 

void loop() 
{ 
  // Read analog port values A0 and A1  
  xValue = analogRead(A0);  
  yValue = analogRead(A1);  
  bValue = digitalRead(9);
  
  if ((xValue <= 50) && (yValue >=500)) {
    Serial.println("RIGHT");
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
  }
  else if ((xValue >= 500) && (yValue <= 50)) {
    Serial.println("UP");
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  }
  else if ((xValue >= 1000) && (yValue <= 500)) {
    Serial.println("LEFT");
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
  }
  else if ((xValue >= 500) && (yValue >= 1000)) {
    Serial.println("DOWN");
    digitalWrite(motor2pin2, LOW);
    digitalWrite(motor2pin1, HIGH);
  }
  else {
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, LOW);
  }
}
