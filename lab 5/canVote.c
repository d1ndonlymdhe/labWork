#include <stdio.h>
int main()
{
    int a;
    printf("Enter age ");
    scanf("%d", &a);
    printf("%s", a>=18 ? "Can vote" : "Can't Vote");
}