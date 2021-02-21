#ifndef STOCKGRABBER_H
#define STOCKGRABBER_H

#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"

class StockGrabber : public Subject {

public:
    StockGrabber();
    ~StockGrabber();

    void attach(Observer& newObserver) override;
    void detach(Observer& deleteObserver) override;
    void notify() override;

    void setAAPLPrice(double newAAPLPrice);
    void setAMZNPrice(double newAMZNPrice);
    void setGOOGPrice(double newGOOGPrice);

private:
    int getIndex(Observer& o);

    std::vector<Observer*> observers;

    double aaplPrice;
    double amznPrice;
    double googPrice;

};


#endif /* STOCKGRABBER_H */