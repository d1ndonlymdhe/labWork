#include <stdio.h>

int main()
{
    float s = 0;
    printf("Enter the side ");
    scanf("%f", &s);
    float area = s * s;
    printf("Area = %f",area);
    return 0;
}