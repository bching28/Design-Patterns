#include "Car.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"
#include "DriveState.h"

Car::Car() {
    parkState = new ParkState(this);
    reverseState = new ReverseState(this);
    neutralState = new NeutralState(this);
    driveState = new DriveState(this);

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

CarState* Car::getParkCarState() {
    return parkState;
}

CarState* getReverseCarState() {
    return reverseState;
}

CarState* getNeutralCarState() {
    return neutralState;
}

CarState* getDriveCarState() {
    return driveState;
}

// State methods
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


// Helper methods
void Car::turnEngineOn() {
    engineOn = true;
}

void Car::turnEngineOff() {
    if (speed != 0) {
        std::cout << "Car is in motion...stop the car!" << std::endl;
    }
    else if (handbrakeEngaged == false) {
        std::cout << "Engage handbrake before turning on the engine" << std::endl;
    }
    else {
        engineOn = false;
    }
}

void Car::engageHandbrake() {
    if (speed == 0) {
        handbrakeEngaged = true;
        std::cout << "Handbrake engaged" << std::endl;
    }
    else {
        std::cout << "Car in motion...won't apply handbrake" << std::endl;
    }
}

void Car::disengageHandbrake() {
    handbrakeEngaged = false;
    std::cout << "Handbrake disengaged" << std::endl;
}

void Car::reverseCar(int reverseSpeed) {
    speed = reverseSpeed;
    std::cout << "Reversing at " << speed << " mph" << std::endl;
}

void Car::pushCar(int pushDistance) {
    distance = pushDistance;
    std::cout << "Pushing car at " << distance << "ft" << std::endl;
}

void Car::accelerateCar(int newSpeed) {
    speed = newSpeed;
    std::cout << "Going " << speed << " mph" << std::endl;
}

void Car::applyBrakes() {
    speed = 0;
    std::cout << "Going " << speed << " mph" << std::endl;
}