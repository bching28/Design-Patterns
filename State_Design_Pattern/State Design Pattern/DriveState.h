#ifndef DRIVESTATE_H
#define DRIVESTATE_H

#include "CarState.h"
#include "Car.h"

class DriveState : public CarState {

public:
    DriveState(Car newCar);
    ~DriveState();

    /*void shutoffEngine() override;
    void reverseCar() override;
    void pushCar() override;
    void accelerateCar(int newSpeed) override;
    void applyBrakes() override;*/

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car car;
};

#endif /* DRIVESTATE_H */