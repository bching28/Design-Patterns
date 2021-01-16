#include "ReverseState.h"
#include "ParkState.h"
#include "NeutralState.h"

ReverseState::ReverseState(Car newCar) {
    car = newCar;
}

void ReverseState::shiftPark() {

}

void ReverseState::shiftReverse() {

}

void ReverseState::shiftNeutral() {

}

void ReverseState::shiftDrive() {

}

/*void ReverseState::shutoffEngine() {
    if (car.speed != 0) {
        std::cout << "You don't wanna do that...car is in motion" << std::endl;
    }
    else if (car.handbrakeEngaged == true) {
        std::cout << "Engage the handbrake" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Neutral" << std::endl;
        car.setCarState(new ParkState(car));
    }
}

void ReverseState::reverseCar() {
    std::cout << "Car already in Reverse" << std::endl;
}

void ReverseState::pushCar() {
    if (car.speed != 0) {
        std::cout << "You don't wanna do that...car is in motion" << std::endl;
    }
    else if (car.handbrakeEngaged == true) {
        std::cout << "Engage the handbrake" << std::endl;
    }
    else {
        std::cout << "Shifting gear to Neutral" << std::endl;
        car.setCarState(new NeutralState(car));
    }
}

void ReverseState::accelerateCar(int newSpeed) {
    car.speed = newSpeed;
    std::cout << "Car is reversing at " << car.speed << " mph" << std::endl;
}

void ReverseState::applyBrakes() {
    car.speed = 0;
    std::cout << "Car has stopped" << std::endl;
}*/