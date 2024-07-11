#include <stdio.h>
#include <string.h>
int main()
{
    char oldstr[]="oldstring";
    char newstr[]="";
    strcpy(newstr,oldstr);
    puts(newstr);
    return 0;
}