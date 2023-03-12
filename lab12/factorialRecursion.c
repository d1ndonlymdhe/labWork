#include<stdio.h>
int fact(n){
    return n==1?1:n*fact(n-1);
}
int main(n){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The factorial is  %d", fact(n));
    return 0;
}