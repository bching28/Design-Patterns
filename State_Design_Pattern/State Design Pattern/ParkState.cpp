#include "ParkState.h"

ParkState::ParkState(Car newCar) {
    car = newCar;
}

void ParkState::shutoffEngine() {
    if (car.handbrakeEngaged == true) {
        std::cout << "Shutting off engine" << std::endl;
    }
    else {
        std::cout << "Engage the handbrake" << std::endl;
    }
}

void ParkState::reverseCar() {
    std::cout << "Put the car in reverse" << std::endl;
}

void ParkState::pushCar() {
    std::cout << "Car won't budge...put the car in neutral" << std::endl;
}

void ParkState::accelerateCar() {
    std::cout << "Put the car in drive" << std::endl;
}

void ParkState::applyBrakes() {
    std::cout << "The car is not moving" << std::endl;
}