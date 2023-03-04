#include <stdio.h>
int main()
{
    int a, b, c, l = 0;
    printf("Enter three numbers ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            l = a;
        }
        else
        {
            if (b > c)
            {
                l = b;
            }
            else
            {
                l = c;
            }
        }
    }
    else
    {
        if (c > a)
        {
            if (c > b)
            {
                l = c;
            }
            else
            {
                l = b;
            }
        }else{
            l = b;
        }
    }

    printf("The largest is %d", l);
}