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
    bool engineOn;
    int speed;
    int distance;

    Car();
    ~Car();

    // methods
    void setCarState(CarState* newCarState);

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    // Possible service methods that a particular State could call
    void turnEngineOff();
    void reverseCar(int reverseSpeed);
    void pushCar(int pushDistance);
    void accelerateCar(int newSpeed);
    void applyBrakes();
    void engageHandbrake();
    void disengageHandbrake();
    void turnEngineOn();

    /*CarState* getParkCarState();
    CarState* getReverseCarState();
    CarState* getNeutralCarState();
    CarState* getDriveCarState();*/

};

#endif /* CAR_H */