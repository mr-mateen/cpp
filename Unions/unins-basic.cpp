#include <iostream>
#include <string>
using namespace std;

union n {
    char c[4];
    int i;
};

int main (){
    int x;
    x = 'a';
    cout << "x = a; " << x << endl;

    // x = x * 256;
    cout << "x = x * 256; " << x << endl;

    x = x + 'b';
    cout << "x = x + 'b'; " << x << endl;

    x = x + 'c';
    cout << "x = x + 'c'; " << x << endl;

    x = x + 'd';
    cout << "x = x + 'd'; " << x << endl;

    n a;
    a.i = 394 *256;

    cout << "union a; a.c => " << a.c;


    return 0;
}