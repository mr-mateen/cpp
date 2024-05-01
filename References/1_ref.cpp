#include <iostream>
using namespace std;

int main()
{
    int i;
    int &j = i;
    i = 3;
    j += 2;
    cout << i;
    cout << j;
    return 0;
}