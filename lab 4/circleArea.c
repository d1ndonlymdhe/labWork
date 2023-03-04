#include <stdio.h>

int main()
{
    float r = 0;
    printf("Enter the radius ");
    scanf("%f", &r);
    float area = 3.14 * r * r;
    printf("Area = %f",area);
    return 0;
}