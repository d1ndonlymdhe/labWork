#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of three sides ");
    scanf("%d %d %d",&a,&b,&c);
    char* tr;
    if(a==b && b==c){
        tr="equilatrel";
    }else if(a==b || a==c || b==c){
        tr="isoceles";
    }else{
        tr = "scalane";
    }
    printf("%s",tr);
}