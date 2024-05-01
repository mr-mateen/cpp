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

    if (operatr == '+')
    {

        result = bit1 ^ bit2 ^ carry;
        carry = (bit1 & bit2) | (bit2 & carry) | (carry & bit1);
    }
    else if (operatr == '-')
    {

        result = bit1 ^ bit2;   // XOR for difference
        carry = (~bit1) & bit2; // AND of NOT and second bit for borrow
    }
    else
    {
        cout << "Invalid operator. Please enter + or -.\n";
        return 1;
    }

    cout << "result: " << result << endl;
    if (operatr == '+')
    {
        cout << "Carry: " << carry << endl;
    }
    else if (operatr == '-')
    {
        cout << "Borrow: " << carry << endl;
    }

    return 0;
}
