#include<stdio.h>

void bon();
void nam();

int main()// function can be called directly or indirectly
{
    char c;
    printf("enter ");
    scanf("%c",&c);

    if(c == 'f')
    {
        bon();
    }
    else
    {
        nam();
    }
    return 0;
}


void bon()
{
    printf("Bonjure");
}


void nam()
{
    printf("nmastey");
}