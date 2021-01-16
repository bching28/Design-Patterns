#include "Car.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"
#include "DriveState.h"

//------------------------------------------------------------------
// Assumptions:
// 1. Engage handbrake before turning off engine
// 2. Engage handbrake can occur when in any state technically
//------------------------------------------------------------------

Car::Car() {
    parkState = new ParkState(this);
    reverseState = new ReverseState(this);
    neutralState = new NeutralState(this);
    driveState = new DriveState(this);

    carState = parkState;

    handbrakeEngaged = true;
    engineOn = false;
    speed = 0;
    distance = 0;
}

Car::~Car() {
    delete carState;
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

CarState* Car::getReverseCarState() {
    return reverseState;
}

CarState* Car::getNeutralCarState() {
    return neutralState;
}

CarState* Car::getDriveCarState() {
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
    std::cout << "Turning on engine" << std::endl;
}

void Car::turnEngineOff() {
    if (speed != 0) {
        std::cout << "Car is in motion...stop the car!" << std::endl;
    }
    else if (carState != getParkCarState()) {
        std::cout << "Shift the car to Park" << std::endl;
    }
    else if (handbrakeEngaged == false) {
        std::cout << "Engage handbrake before turning off the engine" << std::endl;
    }
    else {
        engineOn = false;
        std::cout << "Turning off engine" << std::endl;
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
    // Implied that speed is 0 if you are trying to disengage the handbrake
    handbrakeEngaged = false;
    std::cout << "Handbrake disengaged" << std::endl;
}

void Car::reverseCar(int reverseSpeed) {
    if (carState != getReverseCarState()) {
        std::cout << "Shift the car to Reverse" << std::endl;
    }
    else if (handbrakeEngaged == true) {
        std::cout << "Disengage handbrake" << std::endl;
    }
    else {
        speed = reverseSpeed;
        std::cout << "Reversing at " << speed << " mph" << std::endl;
    }
}

void Car::pushCar(int pushDistance) {
    if (carState != getNeutralCarState()) {
        std::cout << "Shift the car to Neutral" << std::endl;
    }
    else if (handbrakeEngaged == true) {
        std::cout << "Disengage handbrake" << std::endl;
    }
    else {
        distance = pushDistance;
        std::cout << "Pushing car " << distance << "ft" << std::endl;
    }
}

void Car::accelerateCar(int newSpeed) {
    if (carState != getDriveCarState()) {
        std::cout << "Shift the car to Drive" << std::endl;
    }
    else if (handbrakeEngaged == true) {
        std::cout << "Disengage handbrake" << std::endl;
    }
    else {
        speed = newSpeed;
        std::cout << "Going " << speed << " mph" << std::endl;
    }
}

void Car::applyBrakes() {
    if (speed > 0) {
        speed = 0;
        std::cout << "Going " << speed << " mph" << std::endl;
    }
    else if (speed == 0) {
        std::cout << "Car isn't even moving" << std::endl;
    }
}