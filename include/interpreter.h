#ifndef INTERPRETER_H
#define INTERPRETER_H

class InterpreterAdapter
{
public:
    static std::string interpreter(char input)
    {
        if(input == '*')
            return "item2";
        else if(input == 'B')
            return "boss";
        else if(input == 't')
            return "tree";
        else if(input == 'X')
            return "player";
        else if(input == 'b')
            return "brick";
        else if(input == 'E')
            return "outside";       //moge wchodzic outside 'E'
        else if(input == '|')
            return "wall";
        else if(input == ' ')
            return "space";         //moge chodzic space ' '
        else if(input == '#')
            return "rock";
        else if(input == 'e')
            return "empty";
        else if(input == 'g')
            return "grass";         //moge chodzic grass 'g'
        else if(input == 'r')
            return "roof2";
        else if(input == '=')
            return "outsideWall";
        else if(input == 'p')
            return "pole";
        else if(input == 'w')
            return "water";
        else if(input == 'c')
            return "caveEntrance";  //moge wchodzic caveEntrance 'c'
        else if(input == 'h')
            return "bush";
        else if(input == '/')
            return "dashLeft";
        else if(input == '\\')
            return "dashRight";
        else if(input == 'm')
            return "villagerMale";
        else if(input == 'f')
            return "villagerFemale";
        else if(input == '-')
            return "roof";
        else if(input == 'o')
            return "oponent";
        else if(input == 'd')
            return "door";         //moge wchodzic door 'd'
        else return "default";
    }
};
#endif // INTERPRETER_H
