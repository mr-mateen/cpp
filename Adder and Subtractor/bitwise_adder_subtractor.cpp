#include<iostream>
using namespace std;

int main() 
{
    int bit1, bit2;
    char operatr;

    cout << "Enter the first bit (0 or 1): ";
    cin >> bit1;

    cout << "Enter the operator (+ or -): ";
    cin >> operatr;

    cout << "Enter the second bit (0 or 1): ";
    cin >> bit2;

    int result = 0;
    int carry = 0;

    if (operatr == '+') {
        while(bit2 != 0) {
            carry = (bit1 & bit2);
            bit1 = bit1 ^ bit2;
            bit2 = carry << 1;
        }
        result = bit1;
    } else if (operatr == '-') {
        while(bit2 != 0) {
            carry = (~bit1 & bit2);
            bit1 = bit1 ^ bit2;
            bit2 = carry << 1;
        }
        result= bit1; 
    } else {
        cout << "Invalid operator. Please enter + or -.\n";
        return 1; 
    }

    cout << "Result: " << result << endl;

    return 0;
}
