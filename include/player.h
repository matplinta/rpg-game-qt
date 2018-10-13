#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "item.h"
#include <string>
#include <vector>
class Player : public Item
{

public:
    static Player *instance();
    static void setPlayer(std::string name);
    static void setPlayer(int, int, std::string name, std::string description, int hp, int maxHp, int strength, int defence, int level, int EXP, int reqExp);
    void setRequiredEXP(int rx);
    int getRequiredEXP();
    void setOrientation(std::string);
    std::string getOrientation();
    void setCurrentLocation(std::string);
    std::string getCurrentLocation();
    Player& operator+= ( Item *);
    std::vector<Item*> inventoryVect;

protected:
    int _requiredEXP;
    std::string _currentLocation;
    std::string _orientation;
    Player(std::string name);
    Player(std::string name, std::string description, int hp, int maxHp, int strength, int defence, int level, int EXP, int reqExp);
private:
    static Player *inst;
};

#endif // PLAYER_H
