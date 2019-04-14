#ifndef VILLAGER_H
#define VILLAGER_H
#include "element.h"
#include "subtitle.h"
class Villager : public Element
{
protected:
    std::string _name;
    std::string _dialog;
    //Quest *quest;
public:
//    Villager(std::string name, int dialogNo) : _name(name), _dialog(Subtitle::getDialog(dialogNo)) {}
    Villager(std::string name, std::string dialog) : _name(name), _dialog(dialog) {}
//    Villager(int x, int y, std::string sign, std::string name, int dialogNo) : Element(x, y, sign), _name(name), _dialog(Subtitle::getDialog(dialogNo)) {}
    Villager(int x, int y, std::string sign, std::string name, std::string dialog) : Element(x, y, sign), _name(name), _dialog(dialog) {}
    std::string getDialog() {return _dialog;}
    std::string getName()   {return _name;}
    void setName(std::string name) {_name = name;}
    void setDialog(std::string dialog) {_dialog = dialog;}
};
#endif // VILLAGER_H
