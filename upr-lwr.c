#include<stdio.h>

int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c",&c);

    if((c >= 65) && (c <= 90))
    {
        printf("Upper");
    }

    else if((c >= 97) && (c <= 122))
    {
        printf("Lower");
    }
    return 0;
}