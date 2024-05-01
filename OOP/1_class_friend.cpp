#include <iostream>
using namespace std;

class Complex
{
    int real, imag;
    // friend Complex add(Complex a, Complex b){}
};

class Int
{
    int a ;
    public:
    friend void increment(Int *);
    Int(){
        a = 3;
    }
};

void
increment(Int *i)
{
    cout << i->a;
    (*i).a++;
    cout << i->a;
}
int main()
{
    Int x;
    increment(&x);

    return 0;
}