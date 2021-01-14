#ifndef REVERSESTATE_H
#define REVERSESTATE_H

#include "CarState.h"

class ReverseState : public CarState {

public:
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

};

#endif /* REVERSESTATE_H */