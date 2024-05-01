#include <iostream>
using namespace std;
class Mammals
{
public:
    void printMammalMessage()
    {
        cout << "I am a mammal" << endl;
    }
};
class MarineAnimals
{
public:
    void printMarineAnimalsMessage()
    {
        cout << "I am a marine animal" << endl;
    }
};
class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void printBlueWhaleMessage()
    {
        cout << "I belong to both categories:Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    Mammals mammalobj;
    MarineAnimals marineAnimalobj;
    BlueWhale bluewhaleobj;
    mammalobj.printMammalMessage();
    marineAnimalobj.printMarineAnimalsMessage();
    bluewhaleobj.printBlueWhaleMessage();
    bluewhaleobj.printMammalMessage();
    bluewhaleobj.printMarineAnimalsMessage();
    return 0;
}