#include <iostream>
using namespace std;

int i = 3;
int &num()
{
    return i;
}

int main()
{
    int a = num();
    cout << a;
    cout << i;
    num() = 5;
    cout << i;
    cout << a;
    cout << " ";
    a = 2;
    cout << a;
    return 0;
}