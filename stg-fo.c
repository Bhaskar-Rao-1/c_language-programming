#include<stdio.h>

int main()
{
    char name[100];
    printf("Enter your name : ");
    fgets(name,100,stdin);//or gets(name);

    printf("%s\n",name);
    puts(name);
}