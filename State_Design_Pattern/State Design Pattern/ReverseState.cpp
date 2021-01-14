#include "ReverseState.h"

ReverseState::ReverseState(Car newCar) {
    car = newCar;
}

void ReverseState::shutoffEngine() {
    std::cout << "Put the car in Park and engage the handbrake" << std::endl;
}

void ReverseState::reverseCar() {
    std::cout << "You have already put the car in Reverse" << std::endl;
}

void ReverseState::pushCar() {
    std::cout << "Car won't budge...put the car in neutral" << std::endl;
}

void ReverseState::accelerateCar() {
    std::cout << "Car is reversing" << std::endl;
}

void ReverseState::applyBrakes() {
    std::cout << "The car is not moving" << std::endl;
}