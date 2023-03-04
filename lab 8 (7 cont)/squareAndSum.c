#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int c = 1;
    int sum = 0;
    while (c <= n)
    {
        printf("%d \n", c * c);
        sum+=(c*c);
        c++;
    }
    printf("sum = %d ",sum);
    return 0;
}