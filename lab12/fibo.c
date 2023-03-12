#include <stdio.h>
int fibo(int n)
{
    return n == 0 ? 0 : (n == 1 ? 1 : fibo(n - 2) + fibo(n - 1));
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
