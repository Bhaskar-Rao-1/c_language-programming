#include<stdio.h>

int main()
{
    int m;
    printf("Enter marks ");
    scanf("%d",&m);

    if((m >= 0) && (m <= 30))
    {
        printf("FAIL");
    }
    else if((m > 30) && (m <= 100))
    {
        printf("PASS");
    }
    else
    {
        printf("NOT VALID MARKS");
    }
    return 0;
}