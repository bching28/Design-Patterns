#include "StockGrabber.h"

StockGrabber::StockGrabber() {
    aaplPrice = 0;
    amznPrice = 0;
    googPrice = 0;
}

StockGrabber::~StockGrabber() {
    for (Observer* observer : this->observers) {
        delete observer;
    }
}

void StockGrabber::attach(Observer& newObserver) {
    this->observers.push_back(&newObserver);
}

void StockGrabber::detach(Observer& deleteObserver) {
    int index = getIndex(deleteObserver);

    std::cout << "Observer " << index+1 << " deleted" << std::endl;

    this->observers.erase(this->observers.begin() + index);
}

void StockGrabber::notify() {
    for (Observer* observer : this->observers) {
        observer->update(aaplPrice, amznPrice, googPrice);
    }
}

void StockGrabber::setAAPLPrice(double newAAPLPrice) {
    this->aaplPrice = newAAPLPrice;
    notify();
}

void StockGrabber::setAMZNPrice(double newAMZNPrice) {
    this->amznPrice = newAMZNPrice;
    notify();
}

void StockGrabber::setGOOGPrice(double newGOOGPrice) {
    this->googPrice = newGOOGPrice;
    notify();
}

int StockGrabber::getIndex(Observer& o) {
    int index = -1;

    auto it = std::find(this->observers.begin(), this->observers.end(), &o);

    if (it != this->observers.end()) {
        index = distance(this->observers.begin(), it);
    }

    return index;
    //return 0;
}