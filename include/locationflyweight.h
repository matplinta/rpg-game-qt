//
// Created by mateusz on 3/7/19.
//

#ifndef RPG_GAME_QT_LOCATIONFLYWEIGHT_H
#define RPG_GAME_QT_LOCATIONFLYWEIGHT_H

#include "include/location.h"

class LocationFlyweight
{
protected:
    std::map<std::string, Location*> visitedLocations;
public:
    LocationFlyweight();
    Location *getLocation(std::string);
    ~LocationFlyweight();
    static void setInstance();
    static LocationFlyweight* getInstance();
    std::map<std::string, Location *> &getVisitedLocations();
    void setVisitedLocations(const std::map<std::string, Location *> &visitedLocations);

private:
    static LocationFlyweight* inst;
};


#endif //RPG_GAME_QT_LOCATIONFLYWEIGHT_H
