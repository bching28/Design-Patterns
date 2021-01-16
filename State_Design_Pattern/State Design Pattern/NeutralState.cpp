#include "NeutralState.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "DriveState.h"

NeutralState::NeutralState(Car newCar) {
    car = newCar;
}

void NeutralState::shiftPark() {
    if (car.speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car.setCarState(new ParkState(car));
    }
}

void NeutralState::shiftReverse() {
    if (car.speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car.setCarState(new ParkState(car));
    }
}

void NeutralState::shiftNeutral() {
    std::cout << "Car already in Neutral" << std::endl;
}

void NeutralState::shiftDrive() {
    // Can shift from Neutral to Drive even if car is moving
    // e.g. rolling down a hill
    std::cout << "Shifting gears to Drive" << std::endl;
    car.setCarState(new DriveState(car));
}

/*void NeutralState::shutoffEngine() {
    std::cout << "You don't want to shut off the engine when in Park" << std::endl;
}

void NeutralState::reverseCar() {
    std::cout << "Put the car in reverse" << std::endl;
}

void NeutralState::pushCar() {
    if (car.handbrakeEngaged == false) {
        std::cout << "Pushing the car..." << std::endl;
    }
    else {
        std::cout << "Release the handbrake" << std::endl;
    }
}

void NeutralState::accelerateCar(int newSpeed) {
    car.speed = newSpeed;
    std::cout << "Shifting gears to Drive" << std::endl;
    car.setCarState(new DriveState(car));
}

void NeutralState::applyBrakes() {
    car.speed = 0;
    std::cout << "Car has stopped" << std::endl;
}*/