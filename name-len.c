#include<stdio.h>
int count(char name[]);
int main()
{
    char name[100];
    fgets(name,100,stdin);
   printf("%d",count(name));
}
int count(char name[]){
    int c=0;
    int i=0;
    while(name[i]!='\n'){
        c++;
        i++;
    }
    return c;
}