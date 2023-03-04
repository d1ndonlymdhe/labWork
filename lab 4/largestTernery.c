#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers ");
    scanf("%d %d %d", &a, &b, &c);
    int g = ((a > b) && (a > c)) ? a : (((b > c) && (b > a)) ? b : c);
    printf("The greatest number is %d",g);
    return 0;
}