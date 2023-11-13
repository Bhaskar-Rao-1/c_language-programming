#include<stdio.h>

void printable(int n);

int main()
{
    int n = 10;
    printable(n);
    return 0;
}

void printable(int n)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}