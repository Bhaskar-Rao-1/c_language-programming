#include<stdio.h>

int fact(int n);

int main()
{
    printf("%d",fact(5));
    return 0;
}

int fact(int n)
{
    if(n == 0){
    return 1;
    }
    int f1 = fact(n-1);
    int f2 = n;
    return f1 * f2;
}