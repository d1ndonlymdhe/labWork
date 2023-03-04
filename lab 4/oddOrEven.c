#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    char *div = a % 2 == 0 ? "is even" : "is odd";
    printf("%d %s",a,div);
    return 0;
    
}