#include "Car.h"
#include "ParkState.h"

int main() {
    Car* testCar = new Car();
    testCar->setCarState(new ParkState(testCar));

    testCar->shiftDrive();
    testCar->turnEngineOn();
    testCar->shiftDrive();
    testCar->accelerateCar(30);
    testCar->applyBrakes();
    testCar->shiftReverse();
    testCar->reverseCar(3);
    
}