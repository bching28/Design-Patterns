#ifndef CAR_H
#define CAR_H

#include "CarState.h"

class Car {

public:

    Car();
    ~Car();

    //  MEMBER VARIABLES
    // --------------------------------------------------------------
    CarState* parkState;
    CarState* reverseState;
    CarState* neutralState;
    CarState* driveState;

    CarState* carState;

    bool handbrakeEngaged;
    bool engineOn;
    int speed;
    int distance;

    // METHODS
    // --------------------------------------------------------------
    // getters for pointers to different states
    CarState* getParkCarState();
    CarState* getReverseCarState();
    CarState* getNeutralCarState();
    CarState* getDriveCarState();

    // setter to transition between Car State pointers
    void setCarState(CarState* newCarState);

    // abstract methods to implement in each State class
    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    // Possible service methods that a particular State could call
    void turnEngineOn();
    void turnEngineOff();
    void engageHandbrake();
    void disengageHandbrake();
    void reverseCar(int reverseSpeed);
    void pushCar(int pushDistance);
    void accelerateCar(int newSpeed);
    void applyBrakes();

};

#endif /* CAR_H */