#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    int k=strlen(name);
    printf("%d",k-1);

    return 0;
}