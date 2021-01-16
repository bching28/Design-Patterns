#ifndef DRIVESTATE_H
#define DRIVESTATE_H

#include "CarState.h"
#include "Car.h"

class DriveState : public CarState {

public:
    DriveState(Car* newCar);
    ~DriveState();

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car* car;
};

#endif /* DRIVESTATE_H */