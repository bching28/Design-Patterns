#ifndef AIR_H
#define AIR_H

#include "Attack.h"

class Air : public Attack {

public:
    Air();
    ~Air();

    std::string performAttack() override;

};

#endif; /* AIR_H */