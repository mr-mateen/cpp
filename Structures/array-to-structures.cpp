#include <iostream>
#include <string>
using namespace std;


struct Student
{
    char name[50];
    int age;
    char course[50];
    float GPA;
};


int main()
{
    cout << "Class Students \n\n";

    int classStudents;
    cout << "Enter number of students in Class: ";
    cin >> classStudents;

    Student students[classStudents];

    for (int i = 0; i < classStudents; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> students[i].name;

        cout << "Enter student " << i + 1 << " age: ";
        cin >> students[i].age;

        cout << "Enter student " << i + 1 << " course: ";
        cin >> students[i].course;

        cout << "Enter student " << i + 1 << " GPA: ";
        cin >> students[i].GPA;
        cout << "\n\n Student " << i + 1 << " " << students[i].name << students[i].age;
    }

    

    return 0;
}