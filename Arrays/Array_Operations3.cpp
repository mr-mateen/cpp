#include <iostream>
#include <conio.h>
#include <cctype>

using namespace std;

void TRAVERSE(int A[], int n)
{
    cout << "Traverse Operation" << endl;
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
    TRAVERSE(A, size);
}

void DELETE(int A[], int n)
{
    int index;
    int size = n;

    cout << "Enter the index of the element you want to delete: ";
    cin >> index;

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
    TRAVERSE(A, n);
}

void UPDATE(int A[], int size)
{
    int index;
    int newValue;

    cout << "Enter the index you want to update: ";
    cin >> index;

    cout << "Enter the new value: ";
    cin >> newValue;

    if (index >= 0 && index < size)
    {
        A[index] = newValue;
        cout << "Updated array: ";
        TRAVERSE(A, size);
    }
    else
    {
        cout << "Index out of bounds.";
    }
}

void SEARCH(int A[], int size)
{
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    for (int index = 0; index < size; index++)
    {
        if (A[index] == num)
        {
            cout << "Number " << num << " is at index " << index << endl;
            break;
        }
    }
    cout << "Number not found!" << endl;
}

void REVERSE(int A[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;

        start++;
        end--;
    }
    cout << "Result after Reversing array" << endl;
    TRAVERSE(A, size);
}

void AVERAGE(int A[], int size)
{
    int avg = 0;
    for (int index = 0; index < size; index++)
    {
        avg += A[index];
    }

    cout << "The Average is: " << avg / size << endl;
}

int main()
{
    while (true)
    {
        int A[] = {64, 34, 25, 12, 22, 11, 90};
        int size = 7;

        cout << endl;
        cout << endl;
        cout << "Press T to Traverse the Array" << endl;
        cout << "Press L to Insert element in the Array" << endl;
        cout << "Press D to Delete element at the given index of the Array" << endl;
        cout << "Press U to Update to update the element at given index of the Array" << endl;
        cout << "Press S to Search element at given index and how many times it occurrence in the Array" << endl;
        cout << "Press R to Reverse the Array" << endl;
        cout << "Press A to display Average" << endl;
        cout << "Press Q to Quit Program" << endl;
        cout << endl;
        cout << endl;

        char key = getch();
        key = tolower(key);

        if (key == 't')
            TRAVERSE(A, size);
        else if (key == 'l')
            INSERT(A, 7, 4, 9);
        else if (key == 'd')
            DELETE(A, size);
        else if (key == 'u')
            UPDATE(A, size);
        else if (key == 's')
            SEARCH(A, size);
        else if (key == 'r')
            REVERSE(A, size);
        else if (key == 'a')
            AVERAGE(A, size);
        else if (key == 'q')
        {
            cout << "Good Bye!" << endl;
            break;
        }
        else
        {
            cout << "You Pressed wrong key!";
            continue;
        }
    }

    return 0;
}