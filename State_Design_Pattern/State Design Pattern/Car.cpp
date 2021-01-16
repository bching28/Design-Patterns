#include "Car.h"

Car::Car() {
    //parkState = new ParkState(this);
    //reverseState = new ReverseState();
    //neutralState = new NeutralState();
    //driveState = new DriveState();

    carState = NULL;

    handbrakeEngaged = true;
}

void Car::setCarState(CarState* newCarState) {
    if (carState != NULL) {
        delete carState;
    }

    carState = newCarState;
}

void Car::shutoffEngine() {
    carState->shutoffEngine();
}

void Car::reverseCar() {
    carState->reverseCar();
}

void Car::pushCar() {
    carState->pushCar();
}

void Car::accelerateCar(int newSpeed) {
    carState->accelerateCar(newSpeed);
}

void Car::applyBrakes() {
    carState->applyBrakes();
}

/*CarState* Car::getParkCarState() {
    return parkState;
}

CarState* Car::getReverseCarState() {
    return reverseState;
}

CarState* Car::getNeutralCarState() {
    return neutralState;
}

CarState* Car::getDriveCarState() {
    return driveState;
}*/
