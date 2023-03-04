#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped %d %d",a,b);
}