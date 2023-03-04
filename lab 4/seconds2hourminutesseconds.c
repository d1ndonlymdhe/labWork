#include <stdio.h>
int main()
{
    int seconds = 0;
    printf("Enter seconds ");
    scanf("%d", &seconds);
    int hours = 0, minutes = 0, seconds2 = 0;
    hours = seconds / 3600;
    minutes = (seconds - (3600 * hours)) / 60;
    seconds2 = (seconds - (3600 * hours) - (minutes * 60));
    printf("hours = %d, minutes = %d, seconds = %d", hours, minutes, seconds2);
    return 0;
}