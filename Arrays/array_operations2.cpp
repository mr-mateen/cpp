#include <iostream>

using namespace std;

void DISPLAY(int A[], int n)
{
    cout << "Display Array Elements" << endl;
    for (int index = 0; index < n; index++)
    {
        cout << "A[" << index << "] = " << A[index] << endl;
    }
}

void INSERT(int A[], int size, int loc, int element)
{
    int j = size;
    while (j >= loc - 1)
    {
        A[j + 1] = A[j];
        j = j - 1;
    }
    A[loc - 1] = element; // insert "element" at location k
    size = size + 1;
    cout << "\n The array elements after insertion:\n";
    DISPLAY(A, size);
}

void DELETE(int A[], int n, int pos)
{
    int index = pos;
    int size = n;

    if (index < 0 || index >= size)
    {
        cout << "Index out of bounds." << endl;
        return;
    }

    for (int i = index; i < size - 1; i++)
    {
        A[i] = A[i + 1];
    }

    size--;

    cout << "Updated array" << endl;
    DISPLAY(A, n);
}

int main()
{
    int A[10] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;

    cout << "Initial array: " << endl;
    DISPLAY(A, size);

    INSERT(A, size, 3, 7);
    cout << "Array after insertion of 7 at position 3: " << endl;
    DISPLAY(A, size);

    DELETE(A, size, 4);
    cout << "Array after deletion at position 4: " << endl;
    DISPLAY(A, size);

    return 0;
}