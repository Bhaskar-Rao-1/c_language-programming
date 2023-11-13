#include<stdio.h>

int main()
{
    printf("%f\n",2/3.0);
    //explicit
    int c = (int)1.99999;//not roundoff ,leave it after point


    printf("%d\n",c);
    int a = 10;
    float b = 5.5;
    float r = a + b;//implicit
    printf("%f",r);

    return 0;
}