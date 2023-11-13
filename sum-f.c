#include<stdio.h>

int sum(int a,int b);

int main()
{
    int x = 5,y=5;
    printf("sum is %d",sum(x,y));
}

int sum(int a,int b)
{
    int s = a + b;
    return s;
}