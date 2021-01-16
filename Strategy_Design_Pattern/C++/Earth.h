#ifndef EARTH_H
#define EARTH_H

#include "Attack.h"

class Earth : public Attack {

public:
    Earth();
    ~Earth();

    std::string performAttack() override;

};

#endif; /* EARTH_H */