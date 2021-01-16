#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"
#include "DriveState.h"

//------------------------------------------------------------------
// Assumptions:
// 1. Can't shift gears unless engine is turned on
//
//------------------------------------------------------------------


ParkState::ParkState(Car* newCar) {
    car = newCar;
}

void ParkState::shiftPark() {
    std::cout << "Car already in Park" << std::endl;
}

void ParkState::shiftReverse() {
    if (car->engineOn == false) {
        std::cout << "Turn on engine" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Reverse" << std::endl;
        std::cout << "test park" << std::endl;
        car->setCarState(car->getReverseCarState());
    }
}

void ParkState::shiftNeutral() {
    std::cout << "Shifting gear to Neutral" << std::endl;
    car->setCarState(car->getNeutralCarState());
}

void ParkState::shiftDrive() {
    if (car->engineOn == false) {
        std::cout << "Turn on engine" << std::endl;
    }
    else {
        std::cout << "Shifting gears to Drive" << std::endl;
        car->setCarState(car->getDriveCarState());
    }
}