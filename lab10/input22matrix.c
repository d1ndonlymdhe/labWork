#include<stdio.h>
int main(){
    int mat[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for %d x %d \n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}