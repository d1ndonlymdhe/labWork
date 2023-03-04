#include <stdio.h>
int main()
{
    float units;
    printf("Enter units ");
    scanf("%f", &units);
    float bill = 0;
    if (units <= 199)
    {
        bill = units * 1.2;
    }
    else if (units < 400)
    {
        bill = (199 * 1.2) + ((units - 199) * 1.5);
    }
    else if (units < 600)

    {
        bill = 199 * 1.2 + (400 - 199) * 1.5 + (units - 400) * 1.8;
    }
    else
    {
        bill = 199 * 1.2 + (400 - 199) * 1.5 + (600 - 400) * 1.8 + (units - 600) * 2;
    }
    if (bill < 100)
    {
        bill = 100;
    }
    if (bill > 400)
    {
        bill = (115 / 100) * bill;
    }
    printf("cost = %f", bill);
}