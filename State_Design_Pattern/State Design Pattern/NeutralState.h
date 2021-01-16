#ifndef NEUTRALSTATE_H
#define NEUTRALSTATE_H

#include "CarState.h"
#include "Car.h"

class NeutralState : public CarState {

public:
    NeutralState(Car newCar);
    ~NeutralState();

    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar(int newSpeed);
    void applyBrakes();

    Car car;
};

#endif /* NEUTRALSTATE_H */