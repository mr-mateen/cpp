#include <iostream>
#include "../Structures/structures-basic.cpp"
using namespace std;

int main (){
    Employee *p1, p2;
    p1 = (Employee *) malloc(1000 * sizeof(Employee));
    cout << sizeof(p1) << endl;
    cout << sizeof(p2);
    return 0;
}