#include "include/location.h"
#include "QMessageBox"
    Location::Location(int locNum)
    {
        rawMap = new Maps(locNum);
        night = false;
    }
    Location::Location(int locNum, bool nightMode)
    {
        rawMap = new Maps(locNum);
        night = nightMode;
    }
    Maps *Location::getRawMap(){return rawMap;}
    Maps *Location::getActivMap()
    {
        Maps* mapa = new Maps(*rawMap);         //konstruktor kopiujacy
        for(unsigned int i = 0; i< locationElements.size(); i++)
        {
            mapa->setCell(locationElements[i]->getX(), locationElements[i]->getY(), locationElements[i]->getSign());
            mapa->setCell(locationElements[i]->getX(), locationElements[i]->getY(), locationElements[i]->getSign());
        }

        return mapa;
    }
    void Location::addElement(Element* el)
    {
        locationElements.push_back(el);
    }
    Element *Location::getElement(int i)
    {
        return locationElements[i];
    }
    Element *Location::getElement(int x, int y)
    {
        for(unsigned int i = 0; i<locationElements.size(); i++)
        {
            if(locationElements[i]->getX() == x)
            {
                if(locationElements[i]->getY() == y)
                {
                    return locationElements[i];
                }
            }
        }
        return NULL;
    }

    void Location::deleteElement(int x, int y)
    {
        for(unsigned int i = 0; i<locationElements.size(); i++)
        {
            if(locationElements[i]->getX() == x)
            {
                if(locationElements[i]->getY() == y)
                {
                    locationElements.erase(locationElements.begin()+ i);
                }
            }
        }
    }

bool Location::isNight() {
    return night;
}

void Location::setNight(bool night) {
    Location::night = night;
}

LocationHome::LocationHome():Location(0)
    {

        addElement(new Item(10,7, "*", "Iteeem", "aaa", 100, 5,100,0,0,0));
        addElement(new Item(11,7, "*", "i2", "aaa", 1111, 5,5,0,0,0));
        addElement(new Item(12,7, "*", "i3", "aaa", 102220, 5,5,0,0,0));
        addElement(new Opponent(27,7,"o","Ghost", 1));
        addElement(new Villager(5,5, "B","lol", 2));
        addElement(new Door(27,18,"ShadowHills0", 25, 7));
        addElement(new Door(28,18,"ShadowHills0", 25, 7));

    }

    LocationShadowHills0::LocationShadowHills0():Location(1)
    {
        addElement(new Item(8,2, "*", "POTION", "Replenishes player's health", 100, 0,0,0,0,0));
        addElement(new Villager(5,5, "f","lol", 2));
        addElement(new Villager(5, 6, "m","lol", 2));
        addElement(new Door(0,6,"E","ShadowHills1", 36, 6));
        addElement(new Door(25,7,"Home", 28, 18));
        addElement(new Door(18, 8, "c","Cave", 19, 19));

    }
    LocationShadowHills1::LocationShadowHills1():Location(2)
    {
        addElement(new Door(36,6,"E","ShadowHills0", 0, 6));
        addElement(new Door(0,6,"E","HauntedHouse0", 36, 18));

    }
    LocationHauntedHouse0::LocationHauntedHouse0():Location(4, true)
    {
        addElement(new Door(19,20,"c","ShadowHills0", 0, 6));
        addElement(new Opponent(27,7,"o","Ghost", 5));
    }

    LocationCave::LocationCave():Location(3, true) {
        addElement(new Door(19,19,"c","ShadowHills0", 18, 8));
        addElement(new Opponent(27,7,"o","Ghost", 5));
}




//    Location * LocationFlyweight::getLocation(std::string locName)
//    {
//        std::map<std::string, Location*>::iterator findLocation = visitedLocations.find(locName);
//        if(findLocation == visitedLocations.end())
//        {
//            Location* newLocation = LocationFactory::createLocation(locName);
//            this->visitedLocations[locName] = newLocation;
//            return newLocation;
//        }
//        else{
//            //QMessageBox::information(0, "info", "already visited location. You are smart.");
//            return findLocation->second;
//        }
//
//    }
//    LocationFlyweight::~LocationFlyweight()
//    {
//        for(std::map<std::string, Location* >::iterator locat = visitedLocations.begin(); locat != visitedLocations.end(); locat)
//        {
//            if(locat->second)
//            {
//                delete locat->second;
//                locat->second = NULL;
//            }
//        }
//        visitedLocations.clear();
//    }
//    LocationFlyweight& LocationFlyweight::getFlyweight()
//    {
//        static LocationFlyweight locF;
//        return locF;
//    }
//
//const std::map<std::string, Location *> &LocationFlyweight::getVisitedLocations() const {
//    return visitedLocations;
//}
//
//void LocationFlyweight::setVisitedLocations(const std::map<std::string, Location *> &visitedLocations) {
//    LocationFlyweight::visitedLocations = visitedLocations;
//}
