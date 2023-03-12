#include <stdio.h>
int checkOdd(int n)
{
    return n % 2;
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The number is %s\n",checkOdd(n)?"Odd":"Even");
}