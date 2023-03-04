#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8,0};
    int max = arr[0],min=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("max = %d min = %d\n",max,min);
    return 0;
}