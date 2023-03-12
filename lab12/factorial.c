#include <stdio.h>
int fact(int n)
{
    int ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The factorial is %d", fact(n));
    return 0;
}