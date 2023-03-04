#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8,0};
    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for(int i=0;i<8;i++)
    {
        printf("\n %d",arr[i]);
    }
    printf("\n");
    return 0;
}