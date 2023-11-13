#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("fast.txt","w");
    
    fclose(fptr);
    return 0;
}