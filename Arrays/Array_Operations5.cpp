

/* ___ Program No: 1 ___*/

/*
#include <iostream>
using namespace std;

int main()
{
    int index, arr_len;
    int numbs[arr_len];

    cout << "Enter any number (size of array): " << endl;
    cin >> arr_len;
    cout << "Enter any number (element of array): " << endl;

    for (index = 0; index < arr_len; index++)
    {
        cin >> numbs[index];
    }

    cout << "The elements are: ";

    for (index = 0; index < arr_len; index++)
    {
        cout << numbs[index] << "  ";
    }
}

*/

/* ___ program No: 2 ___ */

/*

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number (size of array): " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements in reverse order: ";
    for (int i = n; i > 0; i--)
    {
        cout << arr[i - 1] << endl;
    }
    return 0;
}

*/

/* ___ Program No: 3 ___ */

/*

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int index = 0; index < n; index++)
    {
        sum += arr[index];
    }
    cout << "Sum of array elements is: " << sum << std::endl;
    return 0;
}

*/

/* ___ Program No: 4 ___*/

/*

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n_arr[n];
    for (int i = 0; i < n; i++)
    {
        n_arr[i] = arr[i];
    }
    cout << "Elements of the new array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << n_arr[i] << endl;
    }
    return 0;
}

*/

/* ___ Program No: 5 ___ */

/*

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number (size of array): ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout << "Total number of duplicate elements in the array: " << count << endl;
    return 0;
}

*/

/* ___ Program No: 6 ___ */

/*

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 4, 5, 6, 6, 7};
   int unordered_map<int, int> freq;
   int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i len< ; i++)
    {
        freq[arr[i]]++;
    }
    cout << "Unique elements in the array: ";
    for (int i = 0; i < len; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i] << endl;
        }
    }
    return 0;
}



/* ___ Program No: 7 ___ */

/*

#include <iostream>
using namespace std;
int main()
 {
    int arr[] = {5, 3, 8, 1, 7, 2};
    int max_elem = INT_MIN;
    int min_elem = INT_MAX;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < ; i++)
    {
        if (arr[i] > max_elem)
         {
            max_elem = arr[i];
        }
        if (arr[i] < min_elem)
        {
            min_elem = arr[i];
        }
    }
    cout << "Maximum element in the array: " << max_elem << endl;
    cout << "Minimum element in the array: " << min_elem << endl;
    return 0;
}

*/

/* ___ Program No: 8 ___ */

/*

#include <iostream>
using namespace std;

int main()
{
    int a1[10], a2[10], a3[10];
    int i, j = 0, k = 0, n;

    printf("Separate odd & even integer in separate arrays!");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Input %d element in array \n", n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a1[i] % 2 == 0)
        {
            a2[j] = a1[i];
            j++;
        }
        else
        {
            a3[k] = a1[i];
            k++;
        }
    }
    printf("Even Elements \n");
    for (i = 0; i < j; i++)
    {
        printf("%d \n", a2[i]);
    }

    printf("Odd Elements \n");
    for (i = 0; i < k; i++)
    {
        printf("%d\n", a3[i]);
    }
}

*/

/* ___ Program No; 9 ___ */

/*
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 8, 1, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (arr[j] > arr[j+1])
             {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

/* ___ Program No: 10 ___ */

/*
#include <iostream>
using namespace std;

int main()
 {
    int arr[10] = {5, 3, 8, 1, 7, 2};
    int new_el;
    int position;
    cout << "Enter the value to insert: ";
    cin >> new_el;
    cout << "Enter the position to insert (starting from 0): ";
    cin >> position;
    for (int i = sizeof(arr)/sizeof(arr[0]) - 1; i > position; i--)
    {
        arr[i] = arr[i-1];
    }
  arr[position] = new_el;
    cout << "Updated array: ";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/* ___ Program No: 11 ___*/
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 3, 8, 1, 7, 2};
    int new_el;
    int position;
    cout << "Enter the value to insert: ";
    cin >> new_el;
    cout << "Enter the position to insert (starting from 0): ";
    cin >> position;
    for (int i = sizeof(arr)/sizeof(arr[0]) - 1; i > position; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = new_el;
    cout << "Updated array: ";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
     {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/* ___ Program No: 12 ___ */
/*
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {5, 3, 8, 1, 7, 2};
    int pos;
    cout << "Enter the position of the element to delete (starting from 0): ";
    cin >> pos;
    for (int i = pos; i < sizeof(a)/sizeof(a[0]) - 1; i++)
    {
        a[i] = a[i+1];
    }
    cout << "Updated array: ";
    for (int i = 0; i < sizeof(a)/sizeof(a[0]) - 1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/* ___ Program No: 13 ___ */

/*

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;
    printf("Read a 2D array of size 3x3 & print it \n\n");
    printf("INput element in matrix");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d \n", a[i][j]);
        }
    }

    return 0;
}

*/

/* ___ Program No: 14 ___ */

/*

#include <iostream>
using namespace std;

int main()
{
    int i, j, r, c, a[100][100], b[100][100], sum[100][100];
    cout << "Enter number of row b/w 1 to 100: ";
    cin >> r;
    cout << "Enter number of column b/w 1 to 100: ";
    cin >> c;
    cout << endl
         << "Enter elements of matrix A: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element of row %d and column %d : ", i + 1, j + 1);
            cin >> a[i][j];
        }
    }

    cout << "Enter Element of matrix B" << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element of row %d and column %d : ", i + 1, j + 1);
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of two matrices is " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << sum[i][j] << " ";
            if(j == (c-1)){
                cout << endl;
            }
        }
    }
}

*/