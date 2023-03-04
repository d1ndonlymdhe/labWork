#include <stdio.h>
int main()
{
    int n = 10;
    // printf("Enter how many number ");
    // scanf("%d", &n);
    int sum = 0;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter a number ");
        scanf("%d", &a);
        sum += a;
    }
    float avg = sum / n;
    printf("The sum is %d and avg is %f", sum, avg);
}