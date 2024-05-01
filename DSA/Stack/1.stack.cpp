#include <iostream>
#include "stack.cpp"
using namespace std;

int main()
{
    Stack s;
    int limit = 500000;
    for (int i = 0; i < limit; i++)
    {
        s.push(i);
    }

    while (!s.isEmpty())
    {
        s.pop();
    }

    return 0;
}