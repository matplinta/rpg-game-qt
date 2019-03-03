#ifndef maps_h
#define maps_h

#include<fstream>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
class Maps
{
private:
    std::vector<std::string> mapInTxt;
    int rows = 0;
    int cols = 0;
public:
    Maps(int n)
    {
        loadMap(n);
    }
    void loadMap(int location)
    {
        std::stringstream ss;
        ss << location;
        std::string locStr = ss.str();
        std::string f = "../resources/maps/map" + locStr + ".txt";
        std::ifstream file(f.c_str());
        std::string str;
        while (getline(file, str))
        {
            mapInTxt.push_back(str);
            rows++;

        }
        cols = str.length();
    }

    std::vector<std::string> getMapInTxt() {return mapInTxt;}

    int getRows(){return rows;}
    int getCols(){return cols;}

    // map format 21x37 -1 = 0-20; 0-36
    char getCell(int row, int col)
    {
        if(row >= 0 && row < 21 && col >= 0 && row < 37)
        {
            return mapInTxt[row][col];
        }
        else
            return '!';

    }

    void setCell(int col, int row, std::string sign)
    {
        mapInTxt[row].replace(col, 1, sign);
    }

};

//    void arriveOnMap(player &gracz, int orientation)
//    {
//        switch (orientation)
//        {
//        case 1: gracz.setPlayerPosition(318);
//            break;
//        case 2: gracz.setPlayerPosition(579);
//            break;
//        case 3: gracz.setPlayerPosition(280);
//            break;
//        case 4: gracz.setPlayerPosition(19);
//            break;
//        }
//        //cout<<gracz.getPlayerPosition()<<endl;
//    }
//    string getFollowingMove(player &gracz, string action)
//    {
//        string followingMove;
//        if (action == "w" || action == "W")
//        {
//            followingMove.assign(file_contents, gracz.getPlayerPosition() - 40, 1);
//        }
//        else if (action == "S" || action == "s")
//        {
//            followingMove.assign(file_contents, gracz.getPlayerPosition() + 40, 1);
//        }
//        else if (action == "d" || action == "d")
//        {
//            followingMove.assign(file_contents, gracz.getPlayerPosition() + 1, 1);
//        }
//        else if (action == "a" || action == "a")
//        {
//            followingMove.assign(file_contents, gracz.getPlayerPosition() - 1, 1);
//        }
//        return followingMove;
//    }

//    void setFollowingPosition(player &gracz, string action)
//    {
//        if (action == "w" || action == "W")
//        {
//                gracz.setPlayerPosition(gracz.getPlayerPosition() - 40);
//        }
//        else if (action == "S" || action == "s")
//        {
//                gracz.setPlayerPosition(gracz.getPlayerPosition() + 40);
//        }
//        else if (action == "d" || action == "d")
//        {
//                gracz.setPlayerPosition(gracz.getPlayerPosition() + 1);
//        }
//        else if (action == "a" || action == "a")
//        {
//                gracz.setPlayerPosition(gracz.getPlayerPosition() - 1);
//        }

//        //cout<<gracz.getPlayerPosition()<<endl;
//    }
//    int checkFollowingMove(player &gracz, string action, string followingMove)
//    {
//        if (followingMove == space)
//        {
//            setFollowingPosition(gracz, action);
//            return 1;
//        }
//        else if (followingMove == sth)
//        {

//             setFollowingPosition(gracz, action);
//             return 2;
//        }
//        else if (followingMove == entrance)
//        {
//            int a = gracz.getPlayerPosition();
//            if(a == 317 || a == 278 || a == 358)
//            {
//                arriveOnMap(gracz, 3);
//            }
//            else if(a == 281 || a == 240 || a == 320)
//            {
//                arriveOnMap(gracz, 1);
//            }
//            else if(a == 20 || a == 18 || a == 59)
//            {
//                arriveOnMap(gracz, 2);
//            }
//            else if(a == 578 || a == 580 || a == 539)
//            {
//                arriveOnMap(gracz, 4);
//            }
//             return 3;
//        }
//        else if (followingMove == bossIcon)
//        {

//             setFollowingPosition(gracz, action);
//             return 4;
//        }
//        else
//        {
//            cout<<"\nYou cannot go in this direction\n"<<endl;
//            gracz.showMap();
//            return 0;
//        }
//    }
//    void showMap(player &gracz)
//    {
//        string currentPosition = file_contents;
//        currentPosition.replace(gracz.getPlayerPosition(), 1, playerIcon);
//        cout << currentPosition << endl;
//    }
//    static void initMap(player &gracz)
//    {
//        maps *mapa = new maps(6);
//        gracz.setPlayerMapID(mapa->getMapID());
//        gracz.setPlayerMap(mapa->getFileContents());
//        mapa->arriveOnMap(gracz, 2);
//        mapa->showMap(gracz);
//        delete mapa;
//    }
//    static void changeMap(player &gracz, int mapID)
//    {
//        maps *mapa = new maps(mapID);
//        gracz.setPlayerMap(mapa->getFileContents());
//        delete mapa;
//    }

//    static int chooseMap()
//    {
//        int number;
//        do
//        {
//            cout << "Wybierz numer mapy(1, 2, 3): ";
//            cin >> number;
//            cout << endl;
//        } while (!(number == 1 || number == 2 || number == 3));
//        return number;
//    }

//    void    setMapID(int id) { mapID = id; }
//    int     getMapID() { return mapID; }
//    void    setName(string s) { file_name = s; }
//    string  getName() { return file_name; }
//    void    setFileContents(string s) { file_contents = s; }
//    string  getFileContents() { return file_contents; }
//};

#endif

