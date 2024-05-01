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