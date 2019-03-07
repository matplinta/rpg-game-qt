//
// Created by mateusz on 3/7/19.
//
#include "include/locationflyweight.h"

LocationFlyweight* LocationFlyweight::inst = nullptr;

LocationFlyweight::LocationFlyweight() {}


Location * LocationFlyweight::getLocation(std::string locName)
{
    std::map<std::string, Location*>::iterator findLocation = visitedLocations.find(locName);
    if(findLocation == visitedLocations.end())
    {
        Location* newLocation = LocationFactory::createLocation(locName);
        this->visitedLocations[locName] = newLocation;
        return newLocation;
    }
    else{
        //QMessageBox::information(0, "info", "already visited location. You are smart.");
        return findLocation->second;
    }

}
LocationFlyweight::~LocationFlyweight()
{
    for(std::map<std::string, Location* >::iterator locat = visitedLocations.begin(); locat != visitedLocations.end(); locat)
    {
        if(locat->second)
        {
            delete locat->second;
            locat->second = NULL;
        }
    }
    visitedLocations.clear();
}
void LocationFlyweight::setInstance(){

    inst = new LocationFlyweight();
}

LocationFlyweight *LocationFlyweight::getInstance()
{
    return inst;
}

std::map<std::string, Location *> &LocationFlyweight::getVisitedLocations() {
    return visitedLocations;
}

void LocationFlyweight::setVisitedLocations(const std::map<std::string, Location *> &visitedLocations) {
    LocationFlyweight::visitedLocations = visitedLocations;
}

