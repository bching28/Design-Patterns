#include "DriveState.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"

DriveState::DriveState(Car newCar) {
    car = newCar;
}

void DriveState::shiftPark() {
    if (car.speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Park" << std::endl;
        car.setCarState(new ParkState(car));
    }
}

void DriveState::shiftReverse() {
    if (car.speed != 0) {
        std::cout << "Stop the car" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Reverse" << std::endl;
        car.setCarState(new ReverseState(car));
    }
}

void DriveState::shiftNeutral() {
    std::cout << "Shifting gear to Neutral" << std::endl;
    car.setCarState(new NeutralState(car));
}

void DriveState::shiftDrive() {
    std::cout << "Car already in Drive" << std::endl;
}

/*void DriveState::shutoffEngine() {
    if (car.speed != 0) {
        std::cout << "Car in motion...cannot shut off engine" << std::endl;
    }
    else {
        car.setCarState(new ParkState(car));
    }
}

void DriveState::reverseCar() {
    if (car.speed != 0) {
        std::cout << "Car in motion...cannot reverse car" << std::endl;
    }
    else {
        car.setCarState(new ReverseState(car));
    }
}

void DriveState::pushCar() {
    if (car.speed != 0) {
        std::cout << "You don't wanna do that...car is in motion" << std::endl;
    }
    else {
        car.setCarState(new NeutralState(car));
    }
}

void DriveState::accelerateCar(int newSpeed) {
    car.speed = newSpeed;
    std::cout << "Current car speed is " << car.speed << std::endl;
}

void DriveState::applyBrakes() {
    car.speed = 0;
    std::cout << "Car has stopped" << std::endl;
}*/