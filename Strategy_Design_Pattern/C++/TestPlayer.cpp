#include <iostream>
#include "Player.h"
#include "Water.h"
#include "Earth.h"
#include "Fire.h"
#include "Air.h"

int main() {
    Player* player1 = new Player("Renaldo");

    std::cout << player1->attack() << std::endl;

    player1->setAttackType(new Fire());

    std::cout << player1->attack() << std::endl;

    delete player1;

    return 0;
}