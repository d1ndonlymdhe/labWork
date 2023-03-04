#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int res = 1;
    while (n != 1)
    {
        res  = res * (n);
        n--;
    }
    printf("factorial = %d ", res);
    return 0;
}