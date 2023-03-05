#include<stdio.h>
int main(){
    int matA[2][2],matAns[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for %d x %d \n",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int x;
            printf("Enter value for %d x %d \n",i+1,j+1);
            scanf("%d",&x);
            matAns[i][j] = x + matA[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matAns[i][j]);
        }
        printf("\n");
    }
    return 0;
}