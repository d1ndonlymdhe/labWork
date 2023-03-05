#include <stdio.h>
int main()
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for %d x %d \n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += mat[i][j];
        }
        printf("The sum of row %d is %d \n", i + 1, sum);
        sum = 0;
    }
    sum = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum += mat[i][j];
        }
        printf("The sum of col %d is %d \n", j + 1, sum);
        sum = 0;
    }
    return 0;
}
