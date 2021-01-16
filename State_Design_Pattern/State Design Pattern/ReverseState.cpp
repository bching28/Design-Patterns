#include "ReverseState.h"
#include "ParkState.h"
#include "NeutralState.h"
#include "DriveState.h"

ReverseState::ReverseState(Car* newCar) {
    car = newCar;
}

ReverseState::~ReverseState() {
    delete car;
}

void ReverseState::shiftPark() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car->setCarState(car->getParkCarState());
    }
}

void ReverseState::shiftReverse() {
    std::cout << "Car already in Reverse" << std::endl;
}

void ReverseState::shiftNeutral() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Neutral" << std::endl;
        car->setCarState(car->getNeutralCarState());
    }
}

void ReverseState::shiftDrive() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Drive" << std::endl;
        car->setCarState(car->getDriveCarState());
    }
}