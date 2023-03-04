#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d %d %d", &a, &b, &c);
    if (!(a == b && b == c))
    {
        if (a > b || a > c)
        {
            if (a > b && a > c)
            {
                if (b > c)
                {
                    printf("%d is middle", b);
                }
                else
                {
                    printf("%d is middle", c);
                }
            }
            else
            {
                printf("%d is middle", a);
            }
        }
        else
        {
            if (b > c)
            {
                printf("%d is middle", c);
            }
            else
            {
                printf("%d is middle", b);
            }
        }
    }
    else
    {
        printf("%d %d %d are equal", a, b, c);
    }
    return 0;
}