#include <iostream>
using namespace std;

int main()
{
    bool a, b;

    cout << "Enter the first bit (0 or 1): ";
    cin >> a;
    cout << "Enter the second bit (0 or 1): ";
    cin >> b;

    // Addition using bitwise operators
    bool sum = a ^ b;
    bool carry = a & b;
    while (carry != false)
    {
        carry = carry << 1;
        a = sum;
        b = carry;
        sum = a ^ b;
        carry = a & b;
    }
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;

    // Subtraction using bitwise operators
    bool diff = a ^ b;
    carry = ~a & b;
    while (carry != false)
    {
        carry = carry << 1;
        a = diff;
        b = carry;
        diff = a ^ b;
        carry = ~a & b;
    }
    cout << "Difference of " << a << " and " << b << " is " << diff << endl;

    return 0;
}
