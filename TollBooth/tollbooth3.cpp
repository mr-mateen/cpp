#include <iostream>
#include <conio.h>
using namespace std;
const char ESC = 27;
const double toll = 0.5;
class Toollbooth
{
private:
    unsigned int totalcars;
    double totalcash;

public:
    Toollbooth()
    {
        totalcars = 0;
        totalcash = 0.0;
    }
    void payingcar()
    {
        totalcars++;
        totalcash += 0.5;
    }
    void nopaycar()
    {
        totalcars++;
    }
    void display() const
    {
        cout << "Total cars:" << totalcars << endl;
        cout << "Total cash:" << totalcash << endl;
    }
};
int main()
{
    Toollbooth booth;
    char key;
    while (true)
    {
        cout << "Press 'p' to count a playing car, 'n' to count a nonpaying car, or 'Esc' to exit." << endl;
        key = getch();
        key = tolower(key);
        if (key == 'p')
        {
            booth.payingcar();
        }
        else if (key == 'n')
        {
            booth.nopaycar();
        }
        else if (key == 27)
        {
            booth.display();
        }
    }
    return 0;
}