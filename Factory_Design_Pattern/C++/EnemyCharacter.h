#ifndef ENEMYCHARACTER_H
#define ENEMYCHARACTER_H

#include <iostream>

class EnemyCharacter {

public:
    EnemyCharacter();
    ~EnemyCharacter();

    std::string getName();
    double getAtkDamage();

    void setName(std::string newName);
    void setAtkDamage(double newAtkDamage);

    void followHeroCharacter();
    void attackHeroCharacter();
    void displayEnemyCharacter();

private:
    std::string name;
    double atkDamage;

};

#endif /* ENEMYCHARACTER_H */