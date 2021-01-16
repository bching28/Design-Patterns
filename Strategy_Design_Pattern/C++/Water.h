#ifndef WATER_H
#define WATER_H

#include "Attack.h"

class Water : public Attack {

public:

    Water();
    ~Water();

    std::string performAttack() override;

};


#endif; /* WATER_H */