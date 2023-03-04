#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8,0};
    int co = 0,ce=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]%2==0){
            ce++;
        }
        else{
            co++;
        }
    }
    printf("even = %d odd = %d\n",ce,co);
    return 0;
}