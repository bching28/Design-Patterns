#ifndef NEUTRALSTATE_H
#define NEUTRALSTATE_H

#include "CarState.h"

class NeutralState : public CarState {

public:
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

};

#endif /* NEUTRALSTATE_H */