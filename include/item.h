#ifndef ITEM_H
#define ITEM_H
#include<string>
#include"element.h"
class Item : public Element
{
protected:
    std::string _name;
    std::string _description;
    int _health;
    int _maxHealth;
    int _strength;
    int _defence;
    int _level;
    int _EXP;

public:
    Item();
    Item(std::string, std::string, int, int, int ,int ,int, int);
    Item(int, int, std::string, std::string, std::string, int, int, int ,int ,int, int);
    Item(int, int, std::string, Item *);
    void    setLevel(int);
    int     getLevel();
    void    setDefence(int);
    int     getDefence();
    void    setEXP(int);
    int     getEXP();
    void    setHealth(int);
    int     getHealth();
    void    setMaxHealth(int);
    int     getMaxHealth();
    void    setStrength(int);
    int     getStrength();
    void    setName(std::string);
    void    checkHealth();
    std::string  getName();
    void    setDescription(std::string);
    std::string  getDescription();
    static Item* randItem(int);
};
#endif // ITEM_H
