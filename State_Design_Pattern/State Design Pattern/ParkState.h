#ifndef PARKSTATE_H
#define PARKSTATE_H

#include "CarState.h"

class ParkState : public CarState {
    
public:
    void shutoffEngine();
    void reverseCar();
    void pushCar();
    void accelerateCar();
    void applyBrakes();

};

#endif /* PARKSTATE_H */