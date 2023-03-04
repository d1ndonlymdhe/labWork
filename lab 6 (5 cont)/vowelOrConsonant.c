#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character ");
    a = getchar();
    switch (a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("yes");
            break;
         default:
            printf("no");
            break;
    }
    return 0;
}