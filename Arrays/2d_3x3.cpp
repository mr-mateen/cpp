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