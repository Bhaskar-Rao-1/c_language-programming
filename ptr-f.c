#include<stdio.h>

void sum(int *a,int *b);

int main()
{
    int a = 5,b = 6;
    sum(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void sum(int *a,int *b)
{
    int t= *a ;
     *a = *b;
     *b = t;
   
}