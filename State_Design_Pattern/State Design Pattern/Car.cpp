#include "Car.h"

Car::Car() {
    parkState = new ParkState();
    reverseState = new ReverseState();
    neutralState = new NeutralState();
    driveState = new DriveState();

    carState = parkState;

    handbrakeEngaged = true;
}

void Car::setCarState(CarState* newCarState) {
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

void Car::accelerateCar() {
    carState->accelerateCar();
}

void Car::applyBrakes() {
    carState->applyBrakes();
}

CarState* Car::getParkCarState() {
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
}
