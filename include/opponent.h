#ifndef OPPONENT_H
#define OPPONENT_H
#include <string>
#include "item.h"

class Opponent: public Item
{
public:
    Opponent(std::string , int );
    Opponent(int, int, std::string, std::string, int);
    Opponent(int , int, std::string , std::string , std::string , int , int , int , int , int , int );
    Opponent(int , int , std::string , Opponent *);
    static Opponent* randOpponent(int );

};
#endif // OPPONENT_H
