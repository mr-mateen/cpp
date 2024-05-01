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
        result = bit1 ^ bit2; // XOR for sum
        carry = bit1 & bit2; // AND for carry
        cout << "Carry: " << carry << endl;
    } else if (operatr == '-') {
        result = bit1 ^ bit2; // XOR for difference
        carry = (~bit1) & bit2; // Negation of first bit AND second bit for borrow
        cout << "Borrow: " << carry << endl;
    } else {
        cout << "Invalid operator. Please enter + or -.\n";
        return 1; 
    }

    cout << "Result: " << result << endl;

    return 0;
}
