#ifndef CARSTATE_H
#define CARSTATE_H

#include <iostream>

class CarState {

public:
    // pure virtual function
    /*virtual void shutoffEngine() = 0;
    virtual void reverseCar() = 0;
    virtual void pushCar() = 0;
    virtual void accelerateCar(int newSpeed) = 0;
    virtual void applyBrakes() = 0;*/

    virtual void shiftPark() = 0;
    virtual void shiftReverse() = 0;
    virtual void shiftNeutral() = 0;
    virtual void shiftDrive() = 0;

};

/*
void ParkState::shiftPark() {

}

void ParkState::shiftReverse() {

}

void ParkState::shiftNeutral() {

}

void ParkState::shiftDrive() {

}
*/


#endif /* CARSTATE_H */