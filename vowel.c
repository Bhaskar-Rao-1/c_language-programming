#include<stdio.h>

int count(char word[]);

int main(){
    char word[100]
    ="Hello World";
    printf("vowels %d",count(word));
}
int count(char word[]){
    int i=0;
    int c=0;
    while(word[i]!='\0'){
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
        c++;
        }
    i++;
    }
   word[i]='\0';
    return c;
}