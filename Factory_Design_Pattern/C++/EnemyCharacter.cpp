#include "EnemyCharacter.h"

EnemyCharacter::EnemyCharacter() {
    atkDamage = 0.0;
}

EnemyCharacter::~EnemyCharacter() {

}

std::string EnemyCharacter::getName() {
    return this->name;
}

double EnemyCharacter::getAtkDamage() {
    return this->atkDamage;
}

void EnemyCharacter::setName(std::string newName) {
    this->name = newName;
}

void EnemyCharacter::setAtkDamage(double newAtkDamage) {
    this->atkDamage = newAtkDamage;
}

void EnemyCharacter::followHeroCharacter() {
    std::cout << this->name << " is following the hero." << std::endl;
}

void EnemyCharacter::attackHeroCharacter() {
    std::cout << this->name << " attacks and deals " << this->atkDamage << " damage." << std::endl;
}

void EnemyCharacter::displayEnemyCharacter() {
    std::cout << this->name << " is on the screen." << std::endl;
}