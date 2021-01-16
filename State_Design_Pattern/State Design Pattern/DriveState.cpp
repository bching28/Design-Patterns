#include "DriveState.h"
#include "ParkState.h"
#include "ReverseState.h"
#include "NeutralState.h"

DriveState::DriveState(Car newCar) {
    car = newCar;
}

void DriveState::shiftPark() {

}

void DriveState::shiftReverse() {

}

void DriveState::shiftNeutral() {

}

void DriveState::shiftDrive() {

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