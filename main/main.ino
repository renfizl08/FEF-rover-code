int LED = 11;
int button = 7;
int pot = A5;
int potval = 0;
int butVal = 0;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(pot, OUTPUT);
}

void loop() {
  potval = analogRead(pot);
  butVal = digitalRead(button);
  brightness = potval/4;

  if (butVal == LOW) {
    analogWrite(LED, 0);
  } else {
    analogWrite(LED, brightness);
  }
}