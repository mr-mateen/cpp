#include <iostream>
using namespace std;
class Fruits
{
public:
    static int totalFruits;
    Fruit()
    {
        totalFruits++;
    }
};
int Fruits::totalFruits = 0;
class apples : public Fruits
{
public:
    static int totalApples;
    Apples()
    {
        totalApples++;
    }
};
int apples::totalApples = 0;
class Mangoes
{
public:
    static int totalMangoes;
    Mangoes()
    {
        totalMangoes++;
    }
};
int Mangoes::totalMangoes = 0;
int main()
{
    apples a1, a2;
    Mangoes m1, m2, m3;
    cout << "total fruits in basket:" << Fruits::totalFruits << endl;
    cout << "total apples in basket:" << apples::totalApples << endl;
    cout << "total  mangoes in basket:" << Mangoes::totalMangoes << endl;
}
