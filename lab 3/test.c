// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c = a;
        printf("%d\n", a);
        a = a + b;
        b = c;
    }
    return 0;
}