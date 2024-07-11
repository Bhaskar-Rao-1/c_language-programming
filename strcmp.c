#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[20]="Apple";
    char secondstr[10]="Banana";
    printf("%d",strcmp(firststr, secondstr));
    //0-strings are equal
   // positive -first string is greater
    //negative - second string is greater 

    return 0;
}