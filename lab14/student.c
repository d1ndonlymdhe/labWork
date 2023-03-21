#include <stdio.h>

struct student
{
    char name[30];
    int age;
    int class;
};

int main()
{
    struct student S;
    printf("Enter name age and class");
    scanf("%s%d%d", &S.name, &S.age, &S.class);
    printf("Name = %s , age = %d class = %d \n",S.name,S.age,S.class);
    return 0;
}