#include <stdio.h>
int main()
{
    int i = 0, j = 0, a = 1;
    for (i = 0; i <= 3; i++)
    {
        for (int k = 0; k < (3 - i); k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}