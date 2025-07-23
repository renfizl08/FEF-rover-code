int IR = 9;
int LED = 10;
void setup() {
  Serial.begin(9600);
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  int sensorStatus = digitalRead(IR); //read the sensor

  //If light is Not reflected due to encontering a black color 
  // or no objects are close, the sensor outputs a HIGH (5V) signal

  if (sensorStatus == 1) {
    digitalWrite(LED, LOW);
    Serial.println("Black Detected");
  }
  //IF light is reflected from a non-black color,
  //the senor outputs a LOW (0V) Signal 
  else
  {
    digitalWrite(LED, HIGH);
    Serial.println("Black Not Detected");
  }
}