#include<stdio.h>
int main()
{
    float p,t,r;
    printf("Enter principal time and rate ");
    scanf("%f %f %f",&p,&t,&r);
    float si = (p*t*r)/100;
    printf("Your simple intrest is %f",si);
    return 0;
}