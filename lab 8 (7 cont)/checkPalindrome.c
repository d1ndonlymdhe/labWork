#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int dup = n;
    int rev = 0;
    while(n>0){
        int res = n % 10;
        n = n/10;
        rev = rev*10 + res;
    }
    printf("%s ",rev == dup?"Palindrome":"Not palindrome");
    return 0;
}