#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a >= 10 && a <= 99)
    {
        printf(" it is a two digit number");
    }
    else
    {
        printf("not a two digit number");
    }
    return 0;
    
}