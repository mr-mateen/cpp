#include <iostream>
#include <string>
using namespace std;
class Publication
{
    string title;
    float price;

public:
    void getdata()
    {
        cout << "enter title:";
        cin >> title;
        cout << "enter price:";
        cin >> price;
    }
    void putdata()
    {
        cout << "Title:" << title << endl;
        cout << "Price:" << price << endl;
    }
};
class Book : public Publication
{
private:
    int pagecount;

public:
    void getdata()
    {

        Publication::getdata();
        cout << "enter page count:";
        cin >> pagecount;
    }
    void putdata()
    {
        Publication::putdata();
        cout << "page count:" << pagecount << endl;
    }
};
int main()
{
    Book book;
    cout << "enter book details:\n";
    book.getdata();
    cout << "\n Book information:\n";
    book.putdata();
    return 0;
}
