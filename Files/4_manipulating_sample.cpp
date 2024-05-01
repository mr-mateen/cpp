#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    const int MAX_CHARS = 100;
    char completeLine[MAX_CHARS];
    char *tokenPtr;
    int salary = 0, totalSalary = 0;

    ifstream inFile("sample.txt");
    ofstream outFile("sampleOut.txt", ios::out);

    while(!inFile.eof()){
        inFile.getline(completeLine, MAX_CHARS);
        tokenPtr = strtok(completeLine, " ");
        tokenPtr = strtok(NULL, " ");

        salary = atoi(tokenPtr);
        totalSalary += salary;
        cout << completeLine << endl;
    }

    outFile << "The Total Salary: " << totalSalary;

    inFile.close();
    outFile.close();

    return 0;
}