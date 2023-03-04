#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    printf("Enter a number ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a += 2;
    }
    printf("The sum is %d", sum);
    return 0;
}