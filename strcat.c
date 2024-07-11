#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[20]="Hello";
    char secondstr[10]=" world";
    strcat(firststr, secondstr);
    puts(firststr);
    return 0;
}