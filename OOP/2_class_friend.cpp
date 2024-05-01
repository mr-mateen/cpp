#include <iostream>
using namespace std;

class B;
class C;
class A
{
    int x = 1;
    friend int add(A *, B *, C *c);
};

class B
{
    int x = 1;
    friend int add(A *, B *, C *c);
};

class C {
    int x = 1;
    friend int add(A *, B *, C *);
};

int add(A *a, B *b, C *c)
{
    return a->x + b->x + c->x;
};
int main()
{
    A a;
    B b;
    C c;
    cout << add(&a, &b, &c);
    return 0;
}