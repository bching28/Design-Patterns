#ifndef DRIVESTATE_H
#define DRIVESTATE_H

#include "CarState.h"

class DriveState : public CarState {

public:
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

};

#endif /* DRIVESTATE_H */