#include "NeutralState.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "DriveState.h"

NeutralState::NeutralState(Car* newCar) {
    car = newCar;
}

void NeutralState::shiftPark() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car->setCarState(car->getParkCarState());
    }
}

void NeutralState::shiftReverse() {
    if (car->speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car->setCarState(car->getReverseCarState());
    }
}

void NeutralState::shiftNeutral() {
    std::cout << "Car already in Neutral" << std::endl;
}

void NeutralState::shiftDrive() {
    // Can shift from Neutral to Drive even if car is moving
    // e.g. rolling down a hill
    std::cout << "Shifting gears to Drive" << std::endl;
    car->setCarState(car->getDriveCarState());
}