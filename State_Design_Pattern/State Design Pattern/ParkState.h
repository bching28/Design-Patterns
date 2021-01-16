#ifndef PARKSTATE_H
#define PARKSTATE_H

#include "CarState.h"
#include "Car.h"

class ParkState : public CarState {
    
public:
    ParkState(Car newCar);
    ~ParkState();

    /*void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar(int newSpeed);
    void applyBrakes();*/

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car car;
};

#endif /* PARKSTATE_H */