#ifndef OPONENT_H
#define OPONENT_H
#include <string>
#include "item.h"

class Oponent: public Item
{
public:
    Oponent(std::string , int );
    Oponent(int, int, std::string, std::string, int);
    Oponent(int , int, std::string , std::string , std::string , int , int , int , int , int , int );
    Oponent(int , int , std::string , Oponent *);
    static Oponent* randOponent(int );

};
#endif // OPONENT_H
