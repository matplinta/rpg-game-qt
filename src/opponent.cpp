#include "include/opponent.h"

Opponent::Opponent(std::string name, int level):
    Item(name, "", 100+30*level, 100+30*level, level*5, level*2, level, level*level*10) {}
Opponent::Opponent(int x, int y, std::string sign, std::string name, int level):
    Opponent( name, level) {setPosition(x, y); setSign( sign);}
Opponent::Opponent(int x, int y, std::string sign, std::string name, std::string desc, int health, int maxHealth, int strength, int defence, int level, int exp)
    : Item(x, y, sign, name, desc, health, maxHealth, strength, defence, level, exp){}
Opponent::Opponent(int x, int y, std::string sign, Opponent *opo): Opponent(*opo) {setPosition(x, y); setSign(sign);}
Opponent* Opponent::randOpponent(int diff)
    {
        Opponent *p;
        int r = Element::genRandom(diff, diff + 3);
        switch (Element::genRandom(1, 6))
        {

            case 1: p = new Opponent("Ghost", r);
                break;
            case 2: p = new Opponent("Revenant", r);
                break;
            case 3: p = new Opponent("Zombie", r);
                break;
            case 4: p = new Opponent("Dead", r);
                break;
            case 5: p = new Opponent("Dead Clown", r);
                break;
            case 6: p = new Opponent("Wacky patient", r);
                break;
        }
        return p;
    }
