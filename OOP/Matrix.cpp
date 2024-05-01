#include <iostream>
using namespace std;

class Matrix{
    int row, col;
    public:
        Matrix
};

void MatrixInitializer(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] = 0;
        }
    }
}

void AddMatrix(int A[2][2], int B[2][2], int result[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void MultMatrixByScalar(int k, int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr[i][j] *= k;
        }
    }
}

void DisplayMatrix(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 0}, {0, 1}};
    int result[2][2];

    MatrixInitializer(result);
    MultMatrixByScalar(2, B);
    AddMatrix(A, B, result);
    cout << "Matrix A:" << endl;
    DisplayMatrix(A);
    cout << "Matrix 2*B:" << endl;
    DisplayMatrix(B);
    cout << "Matrix A + 2*B:" << endl;
    DisplayMatrix(result);

    return 0;
}
