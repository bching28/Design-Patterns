#ifndef REVERSESTATE_H
#define REVERSESTATE_H

#include "CarState.h"
#include "Car.h"

class ReverseState : public CarState {

public:
    ReverseState(Car* newCar);
    ~ReverseState();

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car* car;
};

#endif /* REVERSESTATE_H */