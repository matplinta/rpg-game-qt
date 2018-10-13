#ifndef DOOR_H
#define DOOR_H
#include "element.h"
class Door : public Element
{
protected:
    std::string pointingLocation;
    int whereX;
    int whereY;
public:
    void setPointingLocation(std::string x) {pointingLocation = x;}
    std::string getPointingLocation() {return pointingLocation;}
    void setWhereX(int x) {whereX = x;}
    int getWhereX() {return whereX;}
    void setWhereY(int y) {whereY = y;}
    int getWhereY() {return whereY;}
    Door(){}
    Door(int x, int y, std::string l, int whX, int whY): Element(x,y), pointingLocation(l), whereX(whX), whereY(whY) {setSign("d");}
    Door(int x, int y, std::string s, std::string l, int whX, int whY): Element(x,y), pointingLocation(l), whereX(whX), whereY(whY) {setSign(s);}
};
#endif // DOOR_H
