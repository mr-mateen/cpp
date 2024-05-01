#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String{
    private:
    char *buf;

    public:
    String();

    String(const char *s){
        buf = new char[30];
        strcpy(buf, s);
    }

    void display(){
        cout << buf << endl;
    }

    int len(){
        return strlen(buf);
    }
    void operator=(const String &s){
        int len = s.len();
        delete buf;
        buf = new char[len+1];
        strcpy(buf, s.buf);

    }
};

int main(){
    String a("My String 1");
    String b("My String 2");

    a.display();
    b.display();

    b = a;
    b.display();

    return 0;
}