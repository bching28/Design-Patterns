#ifndef NEUTRALSTATE_H
#define NEUTRALSTATE_H

#include "CarState.h"
#include "Car.h"

class NeutralState : public CarState {

public:
    NeutralState(Car newCar);
    ~NeutralState();

    /*void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar(int newSpeed);
    void applyBrakes();*/

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car car;
};

#endif /* NEUTRALSTATE_H */