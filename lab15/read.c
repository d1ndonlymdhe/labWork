#include <stdio.h>
int main(){
    FILE *f = fopen("file.txt","r");
    char *output;
    while(fscanf(f,"%s",output)!=EOF){
        printf("%s\n",output);
    }
    fclose(f);
    return 0;
}