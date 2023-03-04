#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    char *ans = a > 0 ? "positive" : (a < 0 ? "negative" : "zero");
    printf("%d is %s", a, ans);
    return 0;
}