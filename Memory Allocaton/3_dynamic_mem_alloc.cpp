#include <iostream>
using namespace std;

int main(){
    int ns;
    int sm = 0;
    int *nsp, *nsp2;

    cout << "Enter Number of Students: ";
    cin >> ns;
    nsp = (int *) malloc(ns * sizeof(int));

    if(nsp==NULL){
        exit(1);
    }

    nsp2 = nsp;
   for (int i = 0; i < ns; i++)
   {
    cout << "Enter Age of Student" << i + 1 << " :";
    cin >> *nsp2;
    sm += *nsp2;
    nsp2++;
   }

   cout << "Average: " << sm/ns;


   
    
    return 0;
}