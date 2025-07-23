
#include <Pixy2.h>
#include <Pixy2CCC.h>

Pixy2 pixy;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Starting...");

  pixy.init();
}

void loop() {
  // put your main code here, to run repeatedly:

}
