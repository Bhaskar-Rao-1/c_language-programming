#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n >= 0 && n < 10)
    {
        printf("It is a single digit number");
    }
    else if(n >= 10 && n <= 99)
    {
        printf("it is double digit");
    }
    else if(n >= 100 && n <= 999)
    {
        printf("it is tribble digit");
    }
    else
    {
        printf("It is char or int ");
    }

}