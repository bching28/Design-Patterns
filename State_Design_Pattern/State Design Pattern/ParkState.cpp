#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"
#include "DriveState.h"

ParkState::ParkState(Car newCar) {
    car = newCar;
}

void ParkState::shiftPark() {
    std::cout << "Car already in Park" << std::endl;
}

void ParkState::shiftReverse() {
    if (car.engineOn == false) {
        std::cout << "Turn on engine" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Reverse" << std::endl;
        car.setCarState(new ReverseState(car));
    }
}

void ParkState::shiftNeutral() {
    std::cout << "Shifting gear to Neutral" << std::endl;
    car.setCarState(new NeutralState(car));
}

void ParkState::shiftDrive() {
    if (car.engineOn == false) {
        std::cout << "Turn on engine" << std::endl;
    }
    else {
        std::cout << "Shifting gears to Drive" << std::endl;
        car.setCarState(new DriveState(car));
    }
}

/*void ParkState::shutoffEngine() {
    if (car.handbrakeEngaged == true) {
        std::cout << "Shutting off engine" << std::endl;
    }
    else {
        std::cout << "Engage the handbrake" << std::endl;
    }
}

void ParkState::reverseCar() {
    if (car.handbrakeEngaged == true) {
        std::cout << "Release the handbrake" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Reverse" << std::endl;
        car.setCarState(new ReverseState(car));
    }
}

void ParkState::pushCar() {
    if (car.handbrakeEngaged == true) {
        std::cout << "Release the handbrake" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Neutral" << std::endl;
        car.setCarState(new NeutralState(car));
    }
}

void ParkState::accelerateCar(int newSpeed) {
    if (car.handbrakeEngaged == true) {
        std::cout << "Release the handbrake" << std::endl;
    }
    else {
        car.speed = newSpeed;
        std::cout << "Shifting gears to Drive" << std::endl;
        car.setCarState(new DriveState(car));
    }
}

void ParkState::applyBrakes() {
    car.speed = 0;
    std::cout << "Car has stopped" << std::endl;
}*/