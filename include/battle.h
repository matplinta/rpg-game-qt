#ifndef BATTLE_H
#define BATTLE_H
#include "player.h"
#include "opponent.h"

class Battle {
protected:
    Player *player;
    Opponent *opponent;
public:
    Battle(Player *player, Opponent *opponent) : player(player), opponent(opponent) {};

    Player *getPlayer() const {
        return player;
    }

    void setPlayer(Player *player) {
        this->player = player;
    }

    Opponent *getOpponent() const {
        return opponent;
    }

    void setOpponent(Opponent *opponent) {
        this->opponent = opponent;
    }
    static int getDamage(Item* attacker, Item* defender){
        int damage = (attacker->getStrength() * attacker->getStrength()) / (attacker->getStrength() * defender->getDefence());
        if (damage > 1) {
            return damage;
        }
        else
            return 1;
    }

    static void attack(Item* attacker, Item* defender)
    {
        defender->setHealth(defender->getHealth() - getDamage(attacker,defender));
    }
};


#endif // BATTLE_H
