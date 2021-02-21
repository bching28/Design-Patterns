#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
#include "Observer.h"

class Subject {

public:
    virtual void attach(Observer&) {};
    virtual void detach(Observer&) {};
    virtual void notify() {};

};

#endif /* SUBJECT_H */ 