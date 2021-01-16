#ifndef FIRE_H
#define FIRE_H

#include "Attack.h"

class Fire : public Attack {

public:
    Fire();
    ~Fire();

    std::string performAttack() override;

};

#endif; /* FIRE_H */