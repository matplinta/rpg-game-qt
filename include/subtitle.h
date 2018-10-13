#ifndef SUBTITLE_H
#define SUBTITLE_H
#include<string>
#include<fstream>
#include<iostream>
class Subtitle
{
public:
    static std::string getDialog(int line)
    {
        std::string filePath = "subtitle.txt";
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
};
#endif // SUBTITLE_H
//QMessageBox::information(0, "error", QString::fromStdString(mapa->mapInTxt));
