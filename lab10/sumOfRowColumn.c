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
    int sumr = 0;
    int sumc = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumr += mat[i][j];
            sumc += mat[j][i];
        }
        printf("The sum of row %d is %d \n", i + 1, sumr);
        printf("The sum of col %d is %d \n",i+1,sumc);
        sumr = 0;
        sumc=0;
    }
    return 0;
}
