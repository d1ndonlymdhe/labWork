#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    for (i = 3; i >= 0; i--)
    {
        for (int k = (3-i); k >=0; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 0; j--)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}