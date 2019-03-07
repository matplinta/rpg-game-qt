#ifndef LOCATION_H
#define LOCATION_H
#include "maps.h"
#include <vector>
#include <map>
#include "villager.h"
#include "item.h"
#include "opponent.h"
#include "door.h"
#include "player.h"


enum LocationEnum {Home, ShadowHills0, ShadowHills1, Cave, House0, House1, House2, HauntedHouse0, HauntedHouse1, HauntedHouse2, HauntedHouse3, DevilsDen };

class Location
{
public:
    Location(int);
    Location(int, bool);
    Maps *getRawMap();
    Maps *getActivMap();
    void addElement(Element*);
    Element* getElement(int);
    Element* getElement(int, int);
    void deleteElement(int, int);
    bool isNight();
    void setNight(bool night);
protected:
    Maps *rawMap;
    Maps *activMap;
    std::vector<Element *> locationElements;
    bool night;


};



class LocationHome : public Location
{
public:
    LocationHome();

};

class LocationShadowHills0 : public Location
{
public:
    LocationShadowHills0();

};

class LocationShadowHills1 : public Location
{
public:
    LocationShadowHills1();

};
class LocationHauntedHouse0 : public Location
{
public:
    LocationHauntedHouse0();
};
class LocationCave : public Location
{
public:
    LocationCave();
};

class LocationFactory
{
public:
    static Location* createLocation(std::string locationType)
    {
        Player::instance()->setCurrentLocation(locationType);
        if(locationType == "Home")
        {
            return new LocationHome;
        }
        if(locationType == "ShadowHills0")
        {
            return new LocationShadowHills0;
        }
        if(locationType == "ShadowHills1")
        {
            return new LocationShadowHills1;
        }
        if(locationType == "HauntedHouse0")
        {
            return new LocationHauntedHouse0;
        }
        if(locationType == "Cave")
        {
            return new LocationCave;
        }
        return NULL;
    }
};


//class LocationFlyweight
//{
//protected:
//    std::map<std::string, Location*> visitedLocations;
//    static LocationFlyweight *inst;
//public:
//    Location *getLocation(std::string);
//    ~LocationFlyweight();
//    static LocationFlyweight& getFlyweight();
//    const std::map<std::string, Location *> &getVisitedLocations() const;
//    void setVisitedLocations(const std::map<std::string, Location *> &visitedLocations);
//};


#endif // LOCATION_H
