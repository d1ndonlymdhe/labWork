#include <stdio.h>
struct m
{
    int math;
    int science;
};
struct Student
{
    char name[30];
    struct m mark;
};


int main()
{
    struct Student S;
    printf("Enter name marks in math and marks in science \n");
    scanf("%s%d%d",&S.name,&S.mark.math,&S.mark.science);
    printf("Name = %s, maths = %d , science = %d",S.name,S.mark.math,S.mark.science)
    ;
    return 0;
}
