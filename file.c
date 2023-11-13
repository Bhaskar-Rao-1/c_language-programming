#include<stdio.h>

int main(){
//FILE-- it is a hidden structure that is created to open a file
//a FILE ptr that point to structure and access the file
FILE *fptr;
fptr=fopen("fast.txt","r");
if(fptr==NULL){
    printf("Not foun file");
}
else{
fclose(fptr);
}
return 0;

}