#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    char *div = (a % 5 == 0 && a % 8 == 0) ? "is" : "is not";
    printf("%d %s divisible by 5 and 8", a, div);
    return 0;
}