#ifndef STOCKOBSERVER_H
#define STOCKOBSERVER_H

#include "Subject.h"

class StockObserver : public Observer {

public:
    StockObserver(Subject* stockGrabber);
    ~StockObserver();

    void update(double newAAPLPrice, double newAMZNPrice, double newGOOGPrice) override;

private:
    static int observerIDTracker;
    int observerID;

    double aaplPrice;
    double amznPrice;
    double googPrice;

    Subject* stockGrabber;

    void printPrices();

};


#endif /* STOCKOBSERVER_H */