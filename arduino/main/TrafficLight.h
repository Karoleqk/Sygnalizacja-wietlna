#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

class TrafficLight{
  private:
    int RED;
    int YELLOW;
    int GREEN;

  public:
    TrafficLight(int redPin, int yellowPin, int greenPin);

    void setPinsAsOutput();

    void phaseOne();
    void phaseTwo();
    void phaseThree();
    void phaseFour();
};

#endif