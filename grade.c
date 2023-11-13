#include<stdio.h>

int main()
{
    int n;
    printf("Enter marks ");
    scanf("%d",&n);

    if(n < 30)
    {
        printf("C");
    }
    else if(n >=30 && n < 70)
    {
        printf("B");
    }
    else if(n >= 70 && n < 90)
    {
        printf("A");
    }
    else if(n >= 90 && n <= 100)
    {
        printf("A+");
    }
    else
    {
        printf("Enter valid marks");
    }
    return 0;
}