#include<stdio.h>
int main(){
    int arr[] = {1,2,-1,5,-4,5,-8,0};
    int cp = 0,cn=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]<0){
            cn++;
        }
        if(arr[i]>0){
            cp++;
        }
    }
    printf("Positive = %d negative = %d\n",cp,cn);
    return 0;
}