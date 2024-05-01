#include <iostream>
#include <fstream>
using namespace std;

    fstream file;
int main()
{
    char a;
    file.open("out.txt", ios::in | ios::out);
    cout << "in" << ios::in << endl;
    cout << "ou" << ios::out << endl << ios::in || ios::out;

    for (a = 'A'; a <= 'Z'; a++)
    {
        file << a;
    }

    file.close();

    return 0;
}