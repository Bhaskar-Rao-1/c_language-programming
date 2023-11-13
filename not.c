#include<stdio.h>
void check(char arr[],char ch);
int main(){
    char name[100]="Hello World";
    char ch;
    scanf("%c",&ch);
    check(name,ch);
}
void check(char arr[],char ch){
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]==ch){
            printf("Present\n");
            return ;
        }
        i++;
    }
    printf("not present");
}