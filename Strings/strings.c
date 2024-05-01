#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int c;
    // while ((c = getchar()) != '\n')
    // {

    //     printf("%c", c);
    // }

    char s1[20] = {'a', 'b', 'c'};
    char s2[20] = {'d', 'e', 'f'};
    printf("String 1 %c", s1);


    printf("%c", strcpy(s1, s2));
    printf("String 1 modified %c", s1);
    printf("String Length %d", strlen(s1));

    return 0;
}