#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str,100,stdin);
    puts(str);
    int Len=strlen(str);
    printf("%d", Len);
    return 0;
}