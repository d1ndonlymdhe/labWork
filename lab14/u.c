#include <stdio.h>
#include <string.h>
union book
{
    char name[30];
    int price;
};


int main(){
    union book MyBook;
    strcpy(MyBook.name,"ABCD");
    printf("%s\n",MyBook.name);
    MyBook.price = 50;
    printf("%d\n",MyBook.price);
    return 0;
}
