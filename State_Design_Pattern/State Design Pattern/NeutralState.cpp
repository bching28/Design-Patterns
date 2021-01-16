#include "NeutralState.h"
#include "DriveState.h"

NeutralState::NeutralState(Car newCar) {
    car = newCar;
}

void NeutralState::shiftPark() {

}

void NeutralState::shiftReverse() {

}

void NeutralState::shiftNeutral() {

}

void NeutralState::shiftDrive() {

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