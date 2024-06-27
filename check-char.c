#include<stdio.h>
void checkstr(char str[],int ch);
int main()
{
    char str[]="change world";
    char ch='c';
    checkstr(str,ch);
    return 0;
}
void checkstr(char str[],int ch) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==ch) {
            printf("character is present\n");
            return;
        }
    }
    printf("not present");
}