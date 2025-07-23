#include <SPI.h>
#include <Pixy2.h>
Pixy2 pixy;

int LED = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pixy.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  pixy.ccc.getBlocks();
  if (pixy.ccc.numBlocks) {
    for (int i = 0; i < pixy.ccc.numBlocks; i++) {
      pixy.ccc.blocks[i].print();
      if (pixy.ccc.blocks[i].m_signature == 1 && pixy.ccc.getBlocks() > 0) {
        digitalWrite(LED, HIGH);
      } else {
        digitalWrite(LED, LOW);
        Serial.println("No blocks detected.");
      }
    }
  }
}
