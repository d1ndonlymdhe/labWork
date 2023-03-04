#include <stdio.h>
int main()
{
    int days = 0;
    printf("Enter days ");
    scanf("%d", &days);
    int years = 0, weeks = 0, days2 = 0;
    years = days / 365;
    weeks = (days % 365) / 7;
    days2 = days - ((years * 365) + (weeks * 7));
    printf("years = %d, weeks = %d, days = %d",years,weeks,days2);
    return 0;
}