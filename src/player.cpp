#include "include/player.h"

Player *Player::instance()   { return inst; }
void Player::setPlayer(std::string name)
{
    inst = 0;
    inst = new Player(name);
}
void Player::setPlayer(int x, int y, std::string name, std::string description, int hp, int maxHp, int strength, int defence, int level, int EXP, int reqExp)
{
    inst = 0;
    inst = new Player(name, description, hp, maxHp, strength, defence, level, EXP, reqExp);
    inst->setPosition(x,y);
}
void Player::setRequiredEXP(int rx) {_requiredEXP = rx;}
int Player::getRequiredEXP()        {return _requiredEXP;}
void Player::setOrientation(std::string o)  {_orientation = o;}
std::string Player::getOrientation()        {return _orientation;}
void Player::setCurrentLocation(std::string o)  {_currentLocation = o;}
std::string Player::getCurrentLocation()        {return _currentLocation;}
Player::Player(std::string name): Item(name, "", 100, 100, 5, 5, 1, 0), _requiredEXP(15) {}
Player::Player(std::string name, std::string description, int hp, int maxHp, int strength, int defence, int level, int EXP, int reqExp)
    : Item(name, description,  hp, maxHp, strength, defence, level, EXP), _requiredEXP(reqExp) {}
Player *Player::inst = 0;
//Inventory Player::getInventory() {return _inventory;}
//void Player::setInventory(Inventory inv)      {_inventory = inv;}
Player& Player::operator+= ( Item *item)
{
    if (item->getMaxHealth())
    {
        setMaxHealth(getMaxHealth() + item->getMaxHealth());
        std::cout << "+" << item->getMaxHealth() << " MaxHP" << std::endl;
    }
    if (item->getHealth())
    {
        setHealth(getHealth() + item->getHealth());
        std::cout << "+" << item->getHealth() << " HP" << std::endl;

    }
    if (item->getStrength())
    {
        setStrength(getStrength() + item->getStrength());
        std::cout << "+" << item->getStrength() << " STRENGTH" << std::endl;
    }
    if (item->getLevel())
    {
        setLevel(getLevel() + item->getLevel());
        std::cout << "+" << item->getLevel() << " LEVEL" << std::endl;
        setRequiredEXP(30 + 4 * getLevel()*getLevel());
        setStrength(getStrength() + getLevel() * 5 - 5);
        std::cout << "+" << getLevel() * 5 - 5 << " STRENGTH" << std::endl;
        setMaxHealth(getMaxHealth() + 30 * getLevel() - 30);
        std::cout << "+" << 30 * getLevel() - 30 << " MaxHP" << std::endl;
        setHealth(getHealth() + 30 * getLevel() - 30);
        std::cout << "+" << 30 * getLevel() - 30 << " HP" << std::endl;

    }
    if (item->getEXP())
    {
        setEXP(getEXP() + item->getEXP());
        std::cout << "+" << item->getEXP() << " EXP" << std::endl;
    }
    return *this;
}
