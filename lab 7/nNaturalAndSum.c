#include<stdio.h>

char *abcd(){
    
}

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("The sum is %d",sum);
}