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