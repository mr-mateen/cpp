#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char fn[10] = "out.txt";
    char data[] = "Welcome to VU!";

    ofstream file;
    file.open(fn, ios::out);

    if(file){
        cout << "Success!" << endl;
    }else {
        cout << "Error!" << endl;
        exit(1);
    }

    file << data;
    file.close();
    return 0;
}