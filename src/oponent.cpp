#include "include/oponent.h"

Oponent::Oponent(std::string name, int level):
    Item(name, "", 100+30*level, 100+30*level, level*5, level*2, level, level*level*10) {}
Oponent::Oponent(int x, int y, std::string sign, std::string name, int level):
    Oponent( name, level) {setPosition(x, y); setSign( sign);}
Oponent::Oponent(int x, int y, std::string sign, std::string name, std::string desc, int health, int maxHealth, int strength, int defence, int level, int exp)
    : Item(x, y, sign, name, desc, health, maxHealth, strength, defence, level, exp){}
Oponent::Oponent(int x, int y, std::string sign, Oponent *opo): Oponent(*opo) {setPosition(x, y); setSign(sign);}
Oponent* Oponent::randOponent(int diff)
    {
        Oponent *p;
        int r = Element::genRandom(diff, diff + 3);
        switch (Element::genRandom(1, 6))
        {

            case 1: p = new Oponent("Ghost", r);
                break;
            case 2: p = new Oponent("Revenant", r);
                break;
            case 3: p = new Oponent("Zombie", r);
                break;
            case 4: p = new Oponent("Dead", r);
                break;
            case 5: p = new Oponent("Dead Clown", r);
                break;
            case 6: p = new Oponent("Wacky patient", r);
                break;
        }
        return p;
    }
