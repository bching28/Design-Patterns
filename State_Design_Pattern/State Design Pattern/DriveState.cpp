#include "DriveState.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"

DriveState::DriveState(Car* newCar) {
    car = newCar;
}

void DriveState::shiftPark() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car->setCarState(car->getParkCarState());
    }
}

void DriveState::shiftReverse() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Reverse" << std::endl;
        std::cout << "test drive" << std::endl;
        car->setCarState(car->getReverseCarState());
    }
}

void DriveState::shiftNeutral() {
    std::cout << "Shifting gear to Neutral" << std::endl;
    car->setCarState(car->getNeutralCarState());
}

void DriveState::shiftDrive() {
    std::cout << "Car already in Drive" << std::endl;
}