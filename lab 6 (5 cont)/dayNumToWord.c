#include <stdio.h>
int main()
{
    int num;
    printf("Enter day number ");
    scanf("%d", &num);
    char *day;
    switch (num)
    {
    case 1:
        day = "Sunday";
        break;
    case 2:
        day = "Monday";
        break;
    case 3:
        day = "Tuesday";
        break;
    case 4:
        day = "Wednesday";
        break;
    case 5:
        day = "Thursday";
        break;
    case 6:
        day = "Friday";
        break;
    case 7:
        day = "Saturday";
        break;
    default:
        printf("Invalid");
        return 0;
    }
    printf("%s", day);
}