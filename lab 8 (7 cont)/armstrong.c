#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int dup = n;
    int sum = 0;
    while(n>0){
        int res = n % 10;
        n = n/10;
        sum += res*res*res;
    }
    printf("%s",sum == dup?"Armstrong":"Not armstrong");
}