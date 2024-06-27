#include<stdio.h>
void found(char str[],char ch);
int main()
{
    char str[]="hello";
    char ch='o';
    found(str,ch);

    return 0;
}
void found(char str[],char ch) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==ch) {
            printf("character is present\n");
            return;
        }
    }
    printf("character not present\n");
}