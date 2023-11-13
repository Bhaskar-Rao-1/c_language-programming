#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("test.txt","a");
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'e');
    fclose(fptr);
    return 0;
}