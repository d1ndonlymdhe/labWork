#include <stdio.h>
int main(){
    FILE *f = fopen("file.txt","w");
    fprintf(f,"Hello World");
    fclose(f);
    return 0;
}