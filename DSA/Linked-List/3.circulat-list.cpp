#include <iostream>
#include "CList.cpp"
using namespace std;

int main()
{
    CList cl;
    for (int i = 1; i < 5; i++)
    {
        cout << "i = " << i << endl;
        cl.add(i);
    }

    cl.start();
    cl.remove();
    cl.remove();
    cl.remove();
    cl.remove();
    cl.remove();
    cl.start();
    cl.add(5);
    cl.add(6);
    cl.add(7);
    cl.start();
    cout << "--" << cl.get() << endl;

    for (int i = 1; i < 5; i++)
    {
        cl.next();
        cout << "Current: " << cl.get() << endl;
    }

    cl.start();
    cl.next();
    cout << "-- Current -- " << cl.get() << endl;

    cout << "Length: " << cl.length() << endl;

    return 0;
}