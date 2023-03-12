#include<stdio.h>
int cube(int n)
{
    return n*n*n;
}
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Cube = %d",cube(n));
}