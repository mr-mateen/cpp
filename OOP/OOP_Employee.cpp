#include <iostream>
#include <string>
using namespace std;
class BasicInfo
{
protected:
    string name;
    int age;

public:
    void enterBasicInfo()
    {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
};
class DepartmentInfo
{
protected:
    string departmentname;
    string assignedwork;
    string type;

public:
    void enterDepartmentInfo()
    {
        cout << "Enter department name: ";
        cin >> departmentname;
        cout << "Enter assigned work: ";
        cin >> assignedwork;
        cout << "Enter type(daily wages, hourly, monthly): ";
        cin >> type;
    }
};
class Employee : public BasicInfo, public DepartmentInfo
{
public:
    void displayInfo()
    {
        cout << "\nEmpolyee information:\n";
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Department Name:" << departmentname << endl;
        cout << "Assigned work:" << assignedwork << endl;
        cout << "Type:" << type << endl;
    }
};
int main()
{
    Employee employee[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "\n Enter details for Employee" << (i + 1) << ":\n";
        employee[i].enterBasicInfo();
        employee[i].enterDepartmentInfo();
    }
    cout << "\n Employee information:\n";
    for (int i = 0; i < 3; ++i)
    {
        employee[i].displayInfo();
    }
    return 0;
}