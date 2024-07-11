#include<stdio.h>
void dowork(int a,int b,int *sum,int *mul,int *avg);
int main()
{
    int a=4,b=5;
    int sum,mul,avg;
    dowork(a,b,&sum,&mul,&avg);
    printf(" sum is %d product is %d average is %d",sum,mul,avg);
    return 0;
}
void dowork(int a,int b,int *sum,int *mul,int *avg){
*sum=a+b;
*mul=a*b;
*avg=(a+b)/2;
}