#include "StockGrabber.h"
#include "StockObserver.h"

// initialize static variable
int StockObserver::observerIDTracker = 0;

int main() {
    StockGrabber* stockGrabber = new StockGrabber();

    StockObserver* observer1 = new StockObserver(stockGrabber);

    stockGrabber->setAAPLPrice(129.87);
    stockGrabber->setAMZNPrice(3249.90);
    stockGrabber->setGOOGPrice(2101.14);

    StockObserver* observer2 = new StockObserver(stockGrabber);

    stockGrabber->setAAPLPrice(134.00);
    stockGrabber->setAMZNPrice(3300.00);
    stockGrabber->setGOOGPrice(2100.00);

    stockGrabber->detach(*observer1);

    stockGrabber->setAAPLPrice(134.00);
    stockGrabber->setAMZNPrice(3300.00);
    stockGrabber->setGOOGPrice(2100.00);
}