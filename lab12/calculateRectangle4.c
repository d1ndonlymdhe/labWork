#include <stdio.h>

int Area1(int l, int b)
{
    return l * b;
}

void Area2(int l, int b)
{
    printf("The Area is %d", l * b);
}

void Area3()
{
    int l, b;
    printf("Enter the length and breadth\n");

    scanf("%d%d", &l, &b);
    printf("The area is %d\n",l*b);
}

int Area4()
{
    int l, b;
    printf("Enter the length and breadth\n");
    scanf("%d%d", &l, &b);
    return l * b;
}

int main()
{
    printf("Passing argument and returning value\n");
    printf("Enter length and breadth\n");
    int l, b;
    scanf("%d%d", &l, &b);
    printf("The area is %d\n", Area1(l, b));
    printf("Passing argument and returning no value\n");
    printf("Enter length and breadth\n");
    scanf("%d%d", &l, &b);
    Area2(l, b);
    printf("Passing no argument and returning no value\n");
    Area3();
    printf("Passing no argument and returning value\n");
    int area = Area4();
    printf("The area is %d",area);
    return 0;
}