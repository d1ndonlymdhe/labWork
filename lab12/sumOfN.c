#include <stdio.h>
int sum(int n)
{
    return n == 1 ? 1 : n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The sum upto n is %d", sum(n));
    return 0;
}