#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include "item.h"
class Inventory
{
protected:
    std::vector<Item*> items;
public:
    Item *getItem(int i)
    {
        return items[i];
    }
    void addNewItem( Item* item )
    {
        items.push_back(item);
    }
    std::vector<Item*> getVector() {return items;}
};
#endif // INVENTORY_H
