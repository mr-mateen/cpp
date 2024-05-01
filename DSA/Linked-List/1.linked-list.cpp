#include <iostream>
#include "List.cpp"
using namespace std;

int main(){
    List list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.add(6);
    list.add(7);
    list.start();

    while (list.next())
    {
        cout << "List Item: " << list.get() << endl;
    }

    cout << "Length: " << list.length();
    
    return 0;
}