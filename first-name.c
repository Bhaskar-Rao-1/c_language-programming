#include<stdio.h>
void print(char name[]);
int main(){
    char first[]="Bhaskara Rao";
    char last[]="BAntupalli";
    
    print(first);
    print(last);

    return 0;
}
void print(char name[]){
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
    printf("\n");
}