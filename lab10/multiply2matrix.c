#include <stdio.h>
int main()
{
    int matA[3][3], matB[3][3], matAns[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d x %d \n", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d x %d \n", i + 1, j + 1);
            scanf("%d", &matB[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matAns[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                matAns[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matAns[i][j]);
        }
        printf("\n");
    }
    return 0;
}