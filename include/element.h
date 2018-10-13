#ifndef ELEMENT_H
#define ELEMENT_H
#include<string>
#include<cstdlib>
class Element
{
protected:
    int _position[2];
    std::string _sign;

public:
    void setPosition(int x, int y)
    {
        if(x > 36)
            _position[0] = 36;
        else if(x < 0)
            _position[0] = 0;
        else
            _position[0] = x;
        if(y > 20)
            _position[0] = 20;
        else if(y < 0)
            _position[0] = 0;
        else
            _position[1] = y;
    }
    static bool checkPosition(int x, int y)
    {
        if(x > 36 || x < 0 || y>20 || y < 0)
            return false;
        else
            return true;
    }
    int* getPosition(){return _position;}
    int getX() {return _position[0];}
    int getY() {return _position[1];}
    void setSign(std::string s) {_sign = s;}
    std::string getSign() {return _sign;}
    static int genRandom(int from, int upto)
        {
            return (rand() % (upto - from + 1)) + from;
        }
    Element(int x, int y) {setPosition(x,y);}
    Element(int x, int y, std::string s) {setPosition(x,y); setSign(s);}
    Element(){}
    virtual ~Element() = default;
};

#endif // ELEMENT_H
