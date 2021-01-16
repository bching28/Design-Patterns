#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Attack.h"

class Player {

public:
    Player(std::string name);
    ~Player();

    void setName(std::string name);
    void setAttackStat(int attackStat);
    void setDefenseStat(int defenseStat);
    void sethp(int hp);
    void setAttackType(Attack* attackType);

    std::string getName();
    int getAttackStat();
    int getDefenseStat();
    int getHp();

    std::string attack();

private:
    std::string name;
    int attackStat;
    int defenseStat;
    int hp;

    Attack* attackType;

};

#endif; /* PLAYER_H */