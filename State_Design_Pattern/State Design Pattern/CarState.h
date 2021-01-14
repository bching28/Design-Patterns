#ifndef CARSTATE_H
#define CARSTATE_H

#include <iostream>

class CarState {

public:
    // pure virtual function
    virtual void shutoffEngine() = 0;
    virtual void reverseCar() = 0;
    virtual void pushCar() = 0;
    virtual void accelerateCar() = 0;
    virtual void applyBrakes() = 0;

};


#endif /* CARSTATE_H */