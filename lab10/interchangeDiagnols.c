#include<stdio.h>
#define l 3
int main(){
    int mat[l][l];
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            printf("Enter value for %d x %d \n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<l;i++){
        int temp = mat[i][i];
        mat[i][i] = mat[i][(l-1)-i];
        mat[i][(l-1)-i] = temp;
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
