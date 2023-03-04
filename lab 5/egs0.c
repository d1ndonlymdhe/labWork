#include <stdio.h>
int main()
{
    int a;
    printf("Enter number ");
    scanf("%d", &a);
    printf("%s", a > 0 ? "Greater" : a < 0 ? "Smaller"
                                           : "Equal");
}