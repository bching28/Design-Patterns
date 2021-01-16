#ifndef REVERSESTATE_H
#define REVERSESTATE_H

#include "CarState.h"
#include "Car.h"

class ReverseState : public CarState {

public:
    ReverseState(Car* newCar);
    ~ReverseState();

    /*void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar(int newSpeed);
    void applyBrakes();*/

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car* car;
};

#endif /* REVERSESTATE_H */