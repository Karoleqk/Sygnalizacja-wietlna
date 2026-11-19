#include "TrafficLight.h"

TrafficLight trafficLightA(2, 4, 7);
TrafficLight trafficLightB(8, 12, 13);

void setup() {
  // put your setup code here, to run once:
  trafficLightA.setPinsAsOutput();
  trafficLightB.setPinsAsOutput();

  trafficLightA.phaseThree();
  trafficLightB.phaseOne();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(8000);
  trafficLightA.phaseFour();

  delay(3000);
  trafficLightA.phaseOne();

  delay(1000);
  trafficLightB.phaseTwo();
  
  delay(1000);
  trafficLightB.phaseThree();

  delay(8000);
  trafficLightB.phaseFour();

  delay(3000);
  trafficLightB.phaseOne();

  delay(1000);
  trafficLightA.phaseTwo();

  delay(1000);
  trafficLightA.phaseThree();
}