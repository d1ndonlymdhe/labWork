#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8};
    for(int i=0;i<7;i++)
    {
        if(arr[i]<0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}