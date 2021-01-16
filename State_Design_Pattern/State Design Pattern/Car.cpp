#include "Car.h"

Car::Car() {
    //parkState = new ParkState(this);
    //reverseState = new ReverseState();
    //neutralState = new NeutralState();
    //driveState = new DriveState();

    carState = NULL;

    handbrakeEngaged = true;
    engineOn = false;
    speed = 0;
    distance = 0;
}

Car::~Car() {
    //delete carState;
}

void Car::setCarState(CarState* newCarState) {
    if (carState != NULL) {
        delete carState;
    }

    carState = newCarState;
}

void Car::shiftPark() {
    carState->shiftPark();
}

void Car::shiftReverse() {
    carState->shiftReverse();
}

void Car::shiftNeutral() {
    carState->shiftNeutral();
}

void Car::shiftDrive() {
    carState->shiftDrive();
}

void Car::turnEngineOn() {
    engineOn = true;
}

void Car::turnEngineOff() {
    engineOn = false;
}

void Car::reverseCar(int reverseSpeed) {
    speed = reverseSpeed;
}

void Car::pushCar(int pushDistance) {
    distance = pushDistance;
}

void Car::accelerateCar(int newSpeed) {
    speed = newSpeed;
}

void Car::applyBrakes() {
    speed = 0;
}

void Car::engageHandbrake() {
    handbrakeEngaged = true;
}

void Car::disengageHandbrake() {
    handbrakeEngaged = false;
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
