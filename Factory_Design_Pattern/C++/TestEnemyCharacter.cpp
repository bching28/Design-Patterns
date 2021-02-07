#include <iostream>
#include "EnemyCharacterFactory.h"

void executeEnemyPhase(EnemyCharacter* enemyCharacter);

int main() {
    EnemyCharacterFactory* enemyCharacterFactory = new EnemyCharacterFactory();
    EnemyCharacter* enemyCharacter = NULL;

    std::string userInput = "";

    while (1) {
        std::cout << "Select an Enemy Character (sword / shield / spear / bow)" << std::endl;
        std::cin >> userInput;

        if (userInput == "exit") {
            std::cout << "Ending programing" << std::endl;
            break;
        }

        enemyCharacter = enemyCharacterFactory->makeEnemyCharacter(userInput);

        if (enemyCharacter != NULL) {
            executeEnemyPhase(enemyCharacter);
        }
        else {
            std::cout << "Enter a valid string next time" << std::endl;
        }

        // discard the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

}

void executeEnemyPhase(EnemyCharacter* enemyCharacter) {
    enemyCharacter->displayEnemyCharacter();
    enemyCharacter->followHeroCharacter();
    enemyCharacter->attackHeroCharacter();
    std::cout << std::endl;
}