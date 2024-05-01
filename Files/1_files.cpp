#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char word[50], word2[50],
    fn[10] = "data.txt";
    ifstream file;

    file.open(fn);

    if(file){
        cout << "Success!" << endl;
    }else {
        cout << "Error!" << endl;
        exit(1);
    }

    // Reading file
    while(!file.eof()){
        file >> word >> word2;
        cout << "==First== " << word << endl;
        cout << "==Second== " << word2 << endl;
    }
    file.close();
    return 0;
}