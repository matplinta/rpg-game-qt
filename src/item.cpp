#include "include/item.h"

Item::Item()
{
    setHealth(0);
    setMaxHealth(0);
    setStrength(0);
    setLevel(0);
    setEXP(0);
    setName("");
    setSign("*");
    setPosition(0,0);

}
Item::Item(int x, int y, std::string sign, std::string iN = "", std::string iDesc = "", int iH = 0, int iMH = 0, int iS = 0, int iD = 0, int iL = 0, int iExp = 0)
    : Element(x, y, sign), _name(iN),_description(iDesc), _health(iH), _maxHealth(iMH), _strength(iS), _defence(iD), _level(iL), _EXP(iExp) {}

Item::Item(std::string iN = "", std::string iDesc = "", int iH = 0, int iMH = 0, int iS = 0, int iD = 0, int iL = 0, int iExp = 0)
    : _name(iN),_description(iDesc), _health(iH), _maxHealth(iMH), _strength(iS), _defence(iD), _level(iL), _EXP(iExp) {}

Item::Item(int x , int y , std::string sign, Item *item): Item(*item) {setPosition(x, y); setSign(sign);}

void Item::setLevel(int artLevel)         {_level = artLevel;}
void Item::setDefence(int artLevel)       {_defence = artLevel;}
void Item::setHealth(int artHealth)       {_health = artHealth;}
void Item::setMaxHealth(int artMaxHealth) {_maxHealth = artMaxHealth;}
void Item::setStrength(int artDamage)     {_strength = artDamage;}
void Item::setEXP(int artEXP)             {_EXP = artEXP;}
void Item::setName(std::string name)      {_name = name;}
void Item::setDescription(std::string d)  {_description = d;}

int Item::getLevel()              {return _level;}
int Item::getDefence()            {return _defence;}
int Item::getHealth()             {return _health;}
int Item::getMaxHealth()          {return _maxHealth;}
int Item::getStrength()           {return _strength;}
int Item::getEXP()                {return _EXP;}
std::string Item::getName()       {return _name;}
std::string Item::getDescription(){return _description;}
void Item::checkHealth()
{
    if(getHealth() > getMaxHealth())
    {
        setHealth(getMaxHealth());
    }
    else if(getHealth() < 0)
    {
        setHealth(0);
    }
}


Item* Item::randItem(int n)
{
    Item *p = new Item(0);
    switch (n)
    {
    case 1: {p = new Item("a Jar of blood", "", 100, 0, 20, 0, 0, 0 );}
            break;
    case 2: {p = new Item("a Skull", "", 30, 50, 0, 1, 0, 0 );}
            break;
    case 3: {p = new Item("Bones", "",  0, 40, 0, 0, 0, 0);}
            break;
    case 4: {p = new Item("a Birthdate cake", "", 50, 0, 0, 5, 100, 0);}
            break;
    case 5: {p = new Item("the Death's Scythe", "", 0, 0, 200, 0, 20, 0);}
            break;
    case 6: {p = new Item("a ZOMBIEVER", "", 40, 0, 50, 1, 100, 0);}
            break;
    case 7: {p = new Item("a POTION!", "", 100, 0, 0, 0, 0, 0);}
            break;
    }
    return p;
}
