#ifndef SAVE_H
#define SAVE_H
#include "player.h"
#include "QMessageBox"
#include <QFileDialog>
#include <QDataStream>
#include <fstream>
#include <iostream>
#include <sstream>
//#include <boost/algorithm/string.hpp>

class Save
{
protected:
    std::string _filename;
public:
    Save(std::string filename): _filename(filename){ std::cout << _filename;}

    std::string getLine(int line)
    {
        std::string filePath =  _filename;
        std::ifstream file(filePath.c_str());
        std::string str;
        int currentLine = 1;
        while (getline(file, str))
        {
            if(currentLine == line)
                break;
            else currentLine++;
        }
        file.close();
        return str;
    }
    int findTextLine(std::string str)
    {
        int i = 1;
        while(i || getLine(i) == "")
        {
            if(getLine(i) == str)
                break;
            else i++;
        }
        return i;
    }
    void writeToFile(QFile& out, std::string str)
    {

        out.write(str.c_str());
        out.write("\n");
    }
    void writePlayerInfo(QFile& out, Player *player)
    {
        writeToFile(out,player->getName());
        writeToFile(out,player->getDescription());
        writeToFile(out,std::to_string(player->getHealth()));
        writeToFile(out,std::to_string(player->getMaxHealth()));
        writeToFile(out,std::to_string(player->getStrength()));
        writeToFile(out,std::to_string(player->getDefence()));
        writeToFile(out,std::to_string(player->getLevel()));
        writeToFile(out,std::to_string(player->getEXP()));
        writeToFile(out,std::to_string(player->getRequiredEXP()));
        writeToFile(out,std::to_string(player->getX()));
        writeToFile(out,std::to_string(player->getY()));
        writeToFile(out, player->getCurrentLocation());
    }
    void saveGame(Player *player)
    {
        std::string file_name = "../save/" + player->getName() + ".txt";
        QFile file(QString::fromStdString(file_name));
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        writePlayerInfo(file, player);
        QMessageBox::information(0, "Info", "GAME SAVED SUCCESSFULLY\n");
    }
    void loadGame()
    {
        Player::setPlayer(
                            std::stoi(getLine(10).erase(getLine(10).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(11).erase(getLine(11).find_last_not_of(" \n\r\t")+1)),
                            getLine(1),
                            getLine(2),
                            std::stoi(getLine(3).erase(getLine(3).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(4).erase(getLine(4).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(5).erase(getLine(5).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(6).erase(getLine(6).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(7).erase(getLine(7).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(8).erase(getLine(8).find_last_not_of(" \n\r\t")+1)),
                            std::stoi(getLine(9).erase(getLine(9).find_last_not_of(" \n\r\t")+1))
//                            std::cout<< getLine(10).erase(getLine(10).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(11).erase(getLine(11).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(1);
//                            std::cout<< getLine(2);
//                            std::cout<< getLine(3).erase(getLine(3).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(4).erase(getLine(4).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(5).erase(getLine(5).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(6).erase(getLine(6).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(7).erase(getLine(7).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(8).erase(getLine(8).find_last_not_of(" \n\r\t")+1);
//                            std::cout<< getLine(9).erase(getLine(9).find_last_not_of(" \n\r\t")+1);
                            );
			QMessageBox::information(0, "Info", QString::fromStdString(_filename));

        Player::instance()->setCurrentLocation(getLine(12));
//        QMessageBox::information(0, "Info", QString::fromStdString(getLine(1)));
    }

};
#endif // SAVE_H
