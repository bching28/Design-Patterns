#include "Car.h"
#include "ParkState.h"

int main() {
    Car* testCar = new Car();
    testCar->setCarState(new ParkState(testCar));

    testCar->shiftDrive();
    testCar->turnEngineOn();
    testCar->shiftDrive();


    
}