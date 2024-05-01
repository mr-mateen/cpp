#include <iostream>
using namespace std;

int main()
{
	cout << "Memory hold by Datatypes\n\n";

	signed int arr[5] = {1, 2, 3, 4, 5};
	signed int *ptr = arr;

	cout << "Int" << endl;
	cout << "Array [0] " << arr << endl;
	cout << "Array [1] " << ptr + 1 << endl;

	return 0;
}