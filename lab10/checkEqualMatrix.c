#include <stdio.h>
int main(){
    int matA[2][2];
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d x %d ",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            int x;
            printf("%d x %d ",i+1,j+1);
            scanf("%d",&x);
            if(x != matA[i][j]){
                printf("Not Equal");
                return 0;
            }
        }
    }
    printf("Equal\n");
    return 0;
}