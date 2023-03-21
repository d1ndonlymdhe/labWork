#include <stdio.h>
int main(){
    FILE *f = fopen("file.txt","a");
    fprintf(f,"\nThis is programming");
    fclose(f);
    return 0;
}