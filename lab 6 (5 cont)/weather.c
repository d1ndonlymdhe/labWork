#include <stdio.h>
// #include<stdlib.h>
int main()
{
    int temp;
    printf("Enter tempreture ");
    scanf("%d", &temp);
    if (temp >= 40)
    {
        printf("Its very hot");
    }
    else if (temp > 30)
    {
        printf("Its hot");
    }
    else if (temp > 20)
    {
        printf("NOrmal in temp");
    }
    else if (temp > 10)
    {
        printf("cold weather");
    }
    else if (temp > 0)
    {
        printf("very cold");
    }else{
        printf("freezing weather");
    }
    return 0;
}