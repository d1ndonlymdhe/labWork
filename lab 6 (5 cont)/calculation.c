#include <stdio.h>
int main()
{
    int ch = 0;
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter choice\n");
    scanf("%d", &ch);
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    switch (ch)
    {
    case 1:
        printf("Sum = %d", a + b);
        break;
    case 2:
        printf("sub = %d", a - b);
        break;
    case 3:
        printf("product = %d", a * b);
        break;
    default:
        printf("Invalid");
    }
    return 0;
}