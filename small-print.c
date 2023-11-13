#include<stdio.h>
int main()
{
    int a=9,b=9,c=9;
    if((a < b) && (a < c))
    {
        printf("%d",a);
    }
    else if((b < a) && (b < c))
    {
        printf("%d",b);
    }
    else if((c < a) && (c < b))
    {
        printf("%d",c);
    }
    else
    {
        printf("all are same %d",a);
    }
}