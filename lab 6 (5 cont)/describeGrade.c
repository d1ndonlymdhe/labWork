#include<stdio.h>
int main()
{
    printf("Enter grade ");
    switch(getchar()){
        case 'E':
            printf("Excellent");
            break;
        case 'V':
            printf("Very Good");
            break;
        case 'G':
            printf("Good");
            break;
        case 'A':
            printf("Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid Grade");
            break;
    }
    return 0;
}