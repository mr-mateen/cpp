#include <iostream>
#include <fstream>
using namespace std;
main(void)
{
    ofstream out("test.txt"); // Open in default output mode
    if (!out)
    {
        cout << "Cannot open file";
        return 1;
    }
    out << 100 << " " << 123.12 << "a";
    out.close();
    return 0;
}