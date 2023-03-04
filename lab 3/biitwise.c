#include <stdio.h>
int div2(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }
    if (a % b != 0)
    {
        return 0;
    }
    if (a == 2)
    {
        return 1;
    }
    return div2(a / b, b);
}
int main()
{

    // printf("%d",div2(64));
    for (int i = 1; i <= 1028; i++)
    {
        printf("%d %d \n", i, div2(i, 2));
    }
    // int a, b;
    // printf("Enter 2 number ");
    // scanf("%d %d", &a, &b);
    // if ((a | 1) == a)
    // {
    //     printf("%d odd\n", a);
    // }
    // else
    // {
    //     printf("%d even\n", a);
    // }

    // if (a == b)
    // {
    //     printf("%d and %d are equal\n", a, b);
    // }
    // else if ((a & b) == b)
    // {
    //     printf("%d is smaller than %d\n", b, a);
    // }
    // else
    // {
    //     printf("%d is greater than %d\n", b, a);
    // }

    // printf("%d x 2 = %d\n",a, a << 1);
    // printf("round down %d / 2 = %d\n",a, a >> 1);
}
