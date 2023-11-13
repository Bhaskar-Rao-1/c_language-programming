#include<stdio.h>

int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("POSITIVE\n");
        if(a % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd");
        }
    }
    else 
    {
        printf("NEGATIVE\n");
        if(a % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd");
        }
    }
    return 0;
}