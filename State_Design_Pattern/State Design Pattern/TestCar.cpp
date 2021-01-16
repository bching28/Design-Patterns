#include "Car.h"
#include "ParkState.h"

int main() {

    Car* testCar = new Car();
    testCar->setCarState(new ParkState(testCar));

    testCar->shiftDrive();         // fail: engine needs to be on
    testCar->turnEngineOn();
    testCar->shiftDrive();
    testCar->accelerateCar(30);    // fail: need to disengage handbrake first
    testCar->disengageHandbrake();
    testCar->accelerateCar(45);    // pass: accelerates car at 45 mph
    testCar->applyBrakes();
    testCar->reverseCar(3);        // fail: need to be in Reverse
    testCar->shiftReverse();
    testCar->reverseCar(3);        // pass: reverses car
    testCar->applyBrakes();
    testCar->accelerateCar(30);    // fail: need to be in Drive
    testCar->pushCar(5);           // fail: need to be in Neutral
    testCar->shiftNeutral();
    testCar->pushCar(5);           // pass: pushes car in Neutral
    testCar->turnEngineOff();      // fail: need engage handbrake and be in Park
    testCar->shiftPark();
    testCar->turnEngineOff();      // fail: need to engage handbrake first
    testCar->engageHandbrake();
    testCar->turnEngineOff();      // pass: engine turns off
    
}