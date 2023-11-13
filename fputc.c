#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
    
    fputc('a',fptr);
    fputc('p',fptr);
    fputc('p',fptr);
    fputc('l',fptr);
   fputc('e',fptr);
   fclose(fptr);
   return 0;
}