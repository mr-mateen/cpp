#include <iostream>
#include <fstream>

using namespace std;
main(int argc, char **argv)
{
    ifstream inFile;
    inFile.open(argv[1]);

    if (!inFile)
    {
        cout << "Error opening file in input mode" << endl;
    }

    inFile.seekg(0, ios::end);
    long size = inFile.tellg();

    cout << "The Length of File is: " << size << " Bytes" << endl;

    inFile.close();
}