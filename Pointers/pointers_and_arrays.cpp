#include <iostream>
using namespace std;

int main()
{
    int multi[5][10];
    int arr[5];

    cout << "Multi Dimensional Array" << endl;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
        for (int j = 0; j < 10; j++)
        {
            cout << i + j + 1 << " ";
            multi[i][j] = i + j + 1;
        }
        cout << endl;
    }

    /**
     * Multi Dimensional Array
     */
    cout << multi << endl;         /* Address of row[1] column [1] => multi[0][0]*/
    cout << *multi << endl;        /* Same as above */
    cout << **multi << endl;       /* Dereferenced; value of => multi[0][0] */
    cout << *(multi + 3) << endl;  /* Address of multi[3][0] */
    cout << **(multi + 3) << endl; /* Dereferenced; value of => multi[3][0]*/

    /**
     * Dereferenced the row after adding 4
     * then 8th column is accessed by adding number
     * Dereferenced to print value
     */
    cout << *(*(multi + 4) + 8) << endl;

    cout << "Array" << endl;
    cout << arr << endl;      /* Address */
    cout << arr + 3 << endl;  /* Address of arr[3] */
    cout << *arr << endl;     /* value of arr[0] */
    cout << *arr + 3 << endl; /* value of arr[3] */

    /* Printing Value of Multi Dimensional Array */
    int *ptr = *multi;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
        for (int j = 0; j < 10; j++)
        {
            cout << *(ptr++) << " ";
        }
        cout << endl;
    }

    cout << **(multi + 2);

    return 0;
}