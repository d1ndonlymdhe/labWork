//1 1 2 3 5 8 13
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int c = 1;
    int a = 1;
    int b = 0;
    int counter = 0;
    while(counter<n){
        printf("%d ",a);
        c = a;
        a = a + b;
        b = c;
        counter++;
    }
    return 0;
}
