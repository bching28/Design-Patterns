#ifndef NEUTRALSTATE_H
#define NEUTRALSTATE_H

#include "CarState.h"
#include "Car.h"

class NeutralState : public CarState {

public:
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

    Car car;
};

#endif /* NEUTRALSTATE_H */