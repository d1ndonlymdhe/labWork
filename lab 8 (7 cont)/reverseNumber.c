#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int rev = 0;
    while(n>0){
        int res = n % 10;
        n = n/10;
        rev = rev*10 + res;
    }
    printf("%d ",rev);
    return 0;
}