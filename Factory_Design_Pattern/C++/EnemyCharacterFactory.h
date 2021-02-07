#include "EnemyCharacter.h"

class EnemyCharacterFactory {

public:
    EnemyCharacterFactory();
    ~EnemyCharacterFactory();

    EnemyCharacter* makeEnemyCharacter(std::string userInput);
};