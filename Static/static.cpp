#include <iostream>
using namespace std;

class A{
    public:
    static int i;
};

class B{
    public:
    static int i = 0;
};

int main(){
    cout << "A " << A::i << endl;
    cout << "B " << B::i << endl;
    return 0;
}