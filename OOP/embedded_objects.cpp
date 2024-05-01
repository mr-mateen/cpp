#include <iostream>
using namespace std;

class Column{
    public:
        Column(){
            cout << "Column" << endl;
        }
        ~Column(){
            cout << "~Column" << endl;
        }
};
class Row{
    Column col;
    public:
        Row(){
            cout << "Row" << endl;
        }
        ~Row(){
            cout << "~Row" << endl;
        }
};
class Matrix{
    Row row;
    public:
        Matrix(){
            cout << "Matrix" << endl;
        }
        ~Matrix(){
            cout << "~Matrix" << endl;
        }
};

int main(){
    Matrix m;

}