#include <iostream>
using namespace std;

class Student
{
    public:
    static int ins;
    Student() { ins++; }
    ~Student(){ ins--; };
};

int Student::ins = 0;

    void f()
    {
        Student b();
        cout << Student::ins << endl;
    }
int main()
{
    Student a[2000];
    cout << Student::ins << endl;
    f();
    cout << Student::ins << endl;
    Student b[2000];
    Student c[2000];
    Student d[2000];
    Student e[2000];
    Student f[2000];
    Student g[2000];
    Student h[2000];
    Student i[2000];
    Student j[2000];
    Student k[2000];
    Student l[2000];
    cout << Student::ins * sizeof(int) << endl;
}