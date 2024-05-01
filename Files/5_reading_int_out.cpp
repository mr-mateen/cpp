#include <iostream>
#include <fstream>
using namespace std;
main(void)
{
    char ch;
    int i;
    float f;
    ifstream in("test.txt"); // Open in default output mode
    if (!in)
    {
        cout << "Cannot open file";
        return 1;
    }
    in >> i;
    in >> f;
    /* Note that white spaces are being ignored, you can turn
    this off using unsetf(ios::skipws) */
    unsetf(ios::skipws);
    in >> ch;
    cout << i << " " << f << " " << ch;
    in.close();
    return 0;
}