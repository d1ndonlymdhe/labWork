#include <stdio.h>
int main()
{
    int year;
    printf("Enter year ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Is leap");
            }
            else
            {
                printf("Is not leap ");
            }
        }
        else
        {
            printf("Is leap");
        }
    }else{
        printf("Is not leap");
    }
    return 0;
}