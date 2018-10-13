#ifndef BATTLE_H
#define BATTLE_H
#include "player.h"
#include "oponent.h"
class Battle
{
protected:
    Player *player;
    Oponent *oponent;
public:
    Battle(Player *pl, Oponent *op)
    {
        player = pl;
        oponent = op;
    }
};
#endif // BATTLE_H
