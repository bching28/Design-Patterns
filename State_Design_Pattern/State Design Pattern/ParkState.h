#ifndef PARKSTATE_H
#define PARKSTATE_H

#include "CarState.h"
#include "Car.h"

class ParkState : public CarState {
    
public:
    ParkState(Car* newCar);
    ~ParkState();

    void shiftPark();
    void shiftReverse();
    void shiftNeutral();
    void shiftDrive();

    Car* car;
};

#endif /* PARKSTATE_H */