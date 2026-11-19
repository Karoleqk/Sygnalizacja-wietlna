#include "TrafficLight.h"
#include <Arduino.h>

TrafficLight::TrafficLight(int redPin, int yellowPin, int greenPin){
  RED = redPin;
  YELLOW = yellowPin;
  GREEN = greenPin;
}

void TrafficLight::setPinsAsOutput(){
  pinMode(this->RED, OUTPUT);
  pinMode(this->YELLOW, OUTPUT);
  pinMode(this->GREEN, OUTPUT);
}

void TrafficLight::phaseOne(){
  digitalWrite(this->RED, HIGH);
  digitalWrite(this->YELLOW, LOW);
}

void TrafficLight::phaseTwo(){
  digitalWrite(this->YELLOW, HIGH);
}

void TrafficLight::phaseThree(){
  digitalWrite(this->RED, LOW);
  digitalWrite(this->YELLOW, LOW);
  digitalWrite(this->GREEN, HIGH);
}

void TrafficLight::phaseFour(){
  digitalWrite(this->GREEN, LOW);
  digitalWrite(this->YELLOW, HIGH);
}