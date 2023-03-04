#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8,0};
    int arr2[8];
    for(int i=0;i<8;i++)
    {
        arr2[i] = arr[i];
    }
    
    for(int i=0;i<8;i++)
    {
        printf("%d \n",arr2[i]);
    }
    return 0;
}