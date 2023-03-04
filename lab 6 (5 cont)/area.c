#include <stdio.h>
int main()
{
    int ch = 0;
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter choice\n");
    scanf("%d", &ch);
    int l, b, r, h, base;
    switch (ch)
    {
    case 1:
        printf("Enter length and breadth ");
        scanf("%d %d", &l, &b);
        printf("Area = %d", l * b);
        break;
    case 2:
        printf("Enter the radius ");
        scanf("%d", &r);
        printf("Area = %f", 3.14 * r * r);
        break;
    case 3:
        printf("Enter height and base ");
        scanf("%d %d", &h, &base);
        printf("Area = %f", 0.5 * h * base);
        break;
    default:
        printf("Invalid");
    }
    return 0;
}