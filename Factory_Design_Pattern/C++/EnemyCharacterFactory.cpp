#include "EnemyCharacterFactory.h"
#include "SwordEnemyCharacter.h"
#include "ShieldEnemyCharacter.h"
#include "SpearEnemyCharacter.h"
#include "BowEnemyCharacter.h"

EnemyCharacterFactory::EnemyCharacterFactory() {

}

EnemyCharacterFactory::~EnemyCharacterFactory() {

}

EnemyCharacter* EnemyCharacterFactory::makeEnemyCharacter(std::string userInput) {

    if (userInput == "sword") {
        return new SwordEnemyCharacter();
    }
    else if (userInput == "shield") {
        return new ShieldEnemyCharacter();
    }
    else if (userInput == "spear") {
        return new SpearEnemyCharacter();
    }
    else if (userInput == "bow") {
        return new BowEnemyCharacter();
    }
    
    return NULL;
}