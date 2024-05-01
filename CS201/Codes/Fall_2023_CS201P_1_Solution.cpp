/* 
	Student ID: BC230202833
*/

#include <iostream>
#include <cctype>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void reverse_digits(char id[], int len)
{
    for (int i = len; i > 0; i--)
    {
        // isdigit is a function imported from cctype file
        if (isdigit(id[i]))
        {
            cout << id[i] ;
        }
    }
    cout << endl;
}

int main()
{
    char id[11];

    cout << "Enter Student ID: ";
    cin >> id;

    if (id[0] == 'b' && id[1] == 'c')
    {
        cout << "Study Program: Bachelors" << endl;
    }
    else if (id[1] == 'm' && id[1] == 'c')
    {
        cout << "Study Program: Masters" << endl;
    }
    else
    {
        cout << " Study Program: Invalid" << endl;
    }

    cout << "Reversed ID: " << endl;

    reverse_digits(id, 11);

    cout << "Is the last digit prime: ";
    if (is_prime(id[11]))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << id;

    return 0;
}