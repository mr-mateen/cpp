
#include <iostream>
using namespace std;
struct MyStruct {
    int data;

    // Constructor
    MyStruct(int val) : data(val) {}

    // Member function that uses 'this' pointer
    void doubleData() {
        this->data *= 2; // 'this' is a pointer to the invoking object
    }

    // Member function that returns a reference to the invoking object
    MyStruct& incrementData(int val) {
        this->data += val;
        return *this; // Returns a reference to the invoking object
    }
};

int main() {
    MyStruct obj(10);
    obj.doubleData(); // Now obj.data is 20
    cout << obj.data;

    // Method chaining using 'this' pointer
    obj.incrementData(5).doubleData(); // Now obj.data is 50
    cout << obj.data;

    return 0;
}
