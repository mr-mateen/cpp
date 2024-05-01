#include <iostream>
#include <fstream>

using namespace std;
main()
{
    long pos;
    ofstream outFile;
    outFile.open("sample.txt");
    outFile.write("This is apple", 14);

    pos = outFile.tellp();
    outFile.seekp(pos - 7);
    outFile.write(" sam", 4);
    outFile.close();

}