#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {

public:
    virtual void update(double aaplPrice, double amznPrice, double googPrice) = 0;

};

#endif /* OBSERVER_H */