#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if(n%i == 0){
            printf("Not prime");
            return 0;
        }

    }
    printf("prime");
    return 0;
}
