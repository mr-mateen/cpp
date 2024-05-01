#include <iostream>
using namespace std;

class Car
{
    char a;

public:
    Car(char c)
    {
        a = c;
        cout << "Inside Constructor of `Car`" << a << endl;
    }
    ~Car()
    {
        cout << "Inside Destructor of `Car`" << a << endl;
    }
};
void f()
{
    Car f('f');
}
void g()
{
    static Car g('g');
}

Car a('a');

int main()
{
    Car b('b');
    f();
    g();
    cout << "Function `g` has been called" << endl;
}