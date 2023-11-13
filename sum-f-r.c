#include<stdio.h>

int sum(int a);

int main()
{
    printf("%d",sum(4l));
    return 0;
}
int sum(int a)
{
    if(a==0)
    return 0;
    
    int sums =sum(a-1)+a;
    return sums;
}