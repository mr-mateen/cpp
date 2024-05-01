#include <stdio.h>

int main()
{

    /**
     * Array of pointers can store pointers, variable strings
     */

    char *arr[] = {"Hello", "Pakistan"};
    char *a = *arr;
    printf(a);
    a++; /* Refers to 2nd character of the string which it points to*/
    printf(a);

    return 0;
}