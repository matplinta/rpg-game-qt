#ifndef BOSS_H
#define BOSS_H
#include "opponent.h"

class Boss : public Opponent
{
public:
    Boss(std::string name, int level): _name(name), _level(level), _strength(level*7), _defence(level*5), _EXP(level*level*20), _maxHealth(100+45*level), _health(_maxHealth){}

    static Boss* randBoss(int diff)
        {
            Boss *p;
            switch (Element::genRandom(1, 6))
            {
            int r = Element::genRandom(diff +3, diff + 5);
            case 1: p = new boss("Demona", r);
                break;
            case 2: p = new boss("Bowser", r);
                break;
            case 3: p = new boss("The Boss", r);
                break;
            case 4: p = new boss("Nemesis", r);
                break;
            case 5: p = new boss("Ghast Nightmare", r);
                break;
            case 6: p = new boss("Possessed Villain", r);
                break;
            }
            return p;
        }
};
#endif // BOSS_H
