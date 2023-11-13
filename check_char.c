#include<stdio.h>

int main()
{
    char c;
    printf("Enter character");
    scanf("%c",&c);

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("it is a letter");
    }
    else{
        printf("it is not a letter");
    }
    return 0;
}