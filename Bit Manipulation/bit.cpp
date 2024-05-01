#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3, c = -8;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a & b " << (a & b) << endl;
    cout << "a | b " << (a | b) << endl;
    cout << "a ^ b " << (a ^ b) << endl;
    cout << "~b " << ~b << endl;

    int d = c << 3;

    cout << d;
}