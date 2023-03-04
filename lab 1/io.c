#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character ");
    a = getchar();
    printf("Your accii value is %d",a);
    putchar(a);
    return 0;
}