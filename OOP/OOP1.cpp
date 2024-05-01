#include <iomanip>
#include<iostream>
#include<string>
using namespace std;
class Marks
{
protected:
    int rollnum;
    string name;
public:
    float marks;
    Marks()
    {
        rollnum=0;
        name="";
        marks=0.0;

    }
    void input()
    {
        cout<<"enter roll number:";
        cin>>rollnum;
        cin.ignore();
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter marks:";
        cin>>marks;


    }
    void display()
    {
        cout<<"Roll num:"<<rollnum<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
class Physics:public Marks
{
    public:
    Physics()
    {
        name="Physics";
    }
};
class Chemistry:public Marks
{
    public:
    Chemistry()
    {
        name="Chemistry";

    }
};
class Mathematics:public Marks
{
public:
    Mathematics()
    {
        name="Mathematics";

    }
};
int main()
{
    int numstudents;
    cout<<"enter the number of students:";
    cin>>numstudents;
    Physics physicsstudents[numstudents];
    Chemistry chemistrystudents[numstudents];
    Mathematics mathstudents[numstudents];
    for(int i=0;i<numstudents;i++)
    {
        cout<<"student"<<i+1<<"-Physics marks:\n";
        physicsstudents[i].input();

        cout<<"student"<<i+1<<"-Chemistry marks:\n";
        chemistrystudents[i].input();
        cout<<"student"<<i+1<<"-Mathematics marks:\n";
        mathstudents[i].input();

    }
    float physicstotal=0,chemistrytotal=0,mathtotal=0;
    for(int i=0;i<numstudents;i++)
    {
        physicstotal+=physicsstudents[i].marks;

        chemistrytotal+=chemistrystudents[i].marks;
         mathtotal+=mathstudents[i].marks;


    }
    cout<<"Average Physics Marks:"<<physicstotal/numstudents<<endl;
    cout<<"Average chemistry Marks:"<<chemistrytotal/numstudents<<endl;
     cout<<"Average mathematics Marks:"<<mathtotal/numstudents<<endl;
    return 0;
}







