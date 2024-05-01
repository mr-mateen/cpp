#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Address
{
    char city[500000];
    char town[500000];
    char state[5000000];
    char country[30000000];
    unsigned short postalCode;
};

struct Person
{
    char name[5000000];
    int age;
    Address address;
    bool married;
    float height;
    char disability[5000000];
};

struct Employee
{
    Person personalDetails;
    char position[50000000];
    unsigned short service;
};

// int main()
// {
//     Employee p1;
//     strcpy(p1.personalDetails.name, "Abdul Mateen Qureshi");
//     strcpy(p1.personalDetails.disability, "none");
//     p1.personalDetails.age = 20;
//     p1.personalDetails.married = false;
//     p1.personalDetails.height = 5.5;

//     strcpy(p1.personalDetails.address.city, "Kallar Syedan");
//     strcpy(p1.personalDetails.address.country, "Pakistan");
//     strcpy(p1.personalDetails.address.state, "Punjab");
//     strcpy(p1.personalDetails.address.town, "Rawalpindi");
//     p1.personalDetails.address.postalCode = 47450;

//     strcpy(p1.position, "Senior Software Engineer");
//     p1.service = 2;


//     cout << "Name: " << p1.personalDetails.name << endl;
//     cout << "Age: " << p1.personalDetails.age << endl;
//     cout << "Martial Status: " << p1.personalDetails.married << endl;
//     cout << "Height: " << p1.personalDetails.height << endl;
//     cout << "Disability: " << p1.personalDetails.disability << endl;

//     cout << "Address: " << p1.personalDetails.address.city << ", "<< p1.personalDetails.address.town << " " << p1.personalDetails.address.state << ", " << p1.personalDetails.address.country << endl;

//     cout << "Size of Structure: " << sizeof(p1) << endl;
//     return 0;
// }