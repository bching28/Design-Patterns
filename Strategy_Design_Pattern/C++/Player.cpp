#include "Player.h"
#include "Water.h"
#include "Earth.h"
#include "Fire.h"
#include "Air.h"

Player::Player(std::string name) {
    this->name = name;
    this->hp = 10;
    this->attackStat = 5;
    this->defenseStat = 5;
    this->attackType = new Water();
}

Player::~Player() {
    delete attackType;
}

void Player::setName(std::string name) {
    this->name = name;
}

void Player::setAttackStat(int attackStat) {
    this->attackStat = attackStat;
}

void Player::setDefenseStat(int defenseStat) {
    this->defenseStat = defenseStat;
}

void Player::sethp(int hp) {
    this->hp = hp;
}

void Player::setAttackType(Attack* attackType) {
    this->attackType = attackType;
}

std::string Player::getName() {
    return this->name;
}

int Player::getAttackStat() {
    return this->attackStat;
}

int Player::getDefenseStat() {
    return this->defenseStat;
}

int Player::getHp() {
    return this->hp;
}

std::string Player::attack() {
    return this->attackType->performAttack();
}