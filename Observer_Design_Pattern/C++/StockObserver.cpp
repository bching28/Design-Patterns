#include "StockObserver.h"

StockObserver::StockObserver(Subject* stockGrabber) {
    this->stockGrabber = stockGrabber;

    this->observerID = ++observerIDTracker;

    std::cout << "New Observer " << this->observerID << std::endl;

    stockGrabber->attach(*this);
}

StockObserver::~StockObserver() {
    delete stockGrabber;
}

void StockObserver::update(double newAAPLPrice, double newAMZNPrice, double newGOOGPrice) {
    this->aaplPrice = newAAPLPrice;
    this->amznPrice = newAMZNPrice;
    this->googPrice = newGOOGPrice;

    printPrices();
}

void StockObserver::printPrices() {
    std::cout << "Observer " << this->observerID << std::endl;
    std::cout << "AAPL Stock Price: " << this->aaplPrice << std::endl;
    std::cout << "AMZN Stock Price: " << this->amznPrice << std::endl;
    std::cout << "GOOG Stock Price: " << this->googPrice << std::endl;
}