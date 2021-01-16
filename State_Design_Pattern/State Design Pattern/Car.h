#ifndef CAR_H
#define CAR_H

#include "CarState.h"

class Car {

public:
    //CarState* parkState;
    //CarState* reverseState;
    //CarState* neutralState;
    //CarState* driveState;

    CarState* carState;

    bool handbrakeEngaged;
    int speed;

    Car();
    //~Car();

    // methods
    void setCarState(CarState* newCarState);
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar(int newSpeed);
    void applyBrakes();

    /*CarState* getParkCarState();
    CarState* getReverseCarState();
    CarState* getNeutralCarState();
    CarState* getDriveCarState();*/

};

#endif /* CAR_H */