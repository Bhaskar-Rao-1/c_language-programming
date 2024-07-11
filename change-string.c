#include<stdio.h>

int main()
{
//can change string in pointer
    char *canchange;
    fgets(canchange,100,stdin);
    puts(canchange);
    canchange="hello";
    puts(canchange);
    
    //cannot string change in array
    /*char cannotchange[100];
    fgets(cannotchange,100,stdin);
    puts(cannotchange);
    cannotchange="hello";
    puts(cannotchange);*/

    return 0;
}