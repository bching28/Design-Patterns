#ifndef PARKSTATE_H
#define PARKSTATE_H

#include "CarState.h"
#include "Car.h"

class ParkState : public CarState {
    
public:
    ParkState(Car newCar);
    ~ParkState();

    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

    Car car;


};

#endif /* PARKSTATE_H */