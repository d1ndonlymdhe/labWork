#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
    printf("%s", a == b ? "Equal" : "Not Equal");
}