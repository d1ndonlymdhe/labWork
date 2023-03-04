#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    char *div = a % 5 == 0 ? "is" : "is not";
    printf("%d %s divisible by 5",a,div);
    return 0;
    
}