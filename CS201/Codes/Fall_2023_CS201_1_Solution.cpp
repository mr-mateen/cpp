/*
    Student ID: BC230202833
*/
#include <iostream>
using namespace std;

int sum = 0;

int doubleDigits(int n)
{
    return n * 2;
}

void sumOfDoubledDigits(int n)
{
    sum += n;
}

int main()
{
    int id;
    cout << "Then given Student id: BC12345689" << endl;
    cout << "Please enter digital part of id: ";
    cin >> id;

    for (int i = 0; id != 0; i++)
    {
        int lastDigit = id % 10;
        int doubleDigit = doubleDigits(lastDigit);
        cout << "Separated Digits Double: " << doubleDigit << endl;
        sumOfDoubledDigits(doubleDigit);
        id = id / 10;
    }

    cout << "Sum of Double Digits: " << sum << endl;

    return 0;
}