#include<stdio.h>

struct student
{
    char name[30];
    int age;
    int class;
};

int main(){
    struct student Sts[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter name age and class\n");
        scanf("%s%d%d",&Sts[i].name,&Sts[i].age,&Sts[i].class);
    }
    for(int i=0;i<10;i++)
    {
        printf("name = %s age = %d  and class =%d \n",Sts[i].name,Sts[i].age,Sts[i].class);
    }
    return 0;
}