#include<stdio.h>

int fib(int n);

int main()
{
   printf("fib is %d\n",fib(6));
}
int fib(int n )
{
    if(n == 0 || n == 1)
    {
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
    }
    int f1 = fib(n-1);
    int f2 = fib(n-2);
    int f = f1 + f2;
     printf("fib is %d\n",f);
    return f;
}