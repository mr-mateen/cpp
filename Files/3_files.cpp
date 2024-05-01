#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int MAX_CHARS = 100;
    char completeLine[MAX_CHARS];
    ifstream inFile("data.txt");
    ofstream outFile("output.txt", ios::out);

    while(!inFile.eof()){
        inFile.getline(completeLine, MAX_CHARS);
        cout << completeLine << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}