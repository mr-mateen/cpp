#include <iostream>
#include "../Structures/structures-basic.cpp"
using namespace std;

int main(){
    Employee *i, *n, *p, *x;
    i = (Employee *) malloc(200000000 * sizeof(Employee));
    n = (Employee *) malloc(200000000 * sizeof(Employee));
    p = (Employee *) malloc(200000000 * sizeof(Employee));
    x = (Employee *) malloc(200000000 * sizeof(Employee));

    for (int o = 0; o < 10000000; o++)
    {
        i++;
    }

    
    return 0;
}