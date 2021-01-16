#ifndef DRIVESTATE_H
#define DRIVESTATE_H

#include "CarState.h"
#include "Car.h"

class DriveState : public CarState {

public:
    DriveState(Car newCar);
    ~DriveState();

    void shutoffEngine() override;
    void reverseCar() override;
    void pushCar() override;
    void accelerateCar(int newSpeed) override;
    void applyBrakes() override;

    Car car;
};

#endif /* DRIVESTATE_H */