#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,c;
    printf("enter number\n");
    scanf("%d",&a);
    printf("enter number\n");
    scanf("%d",&b);
    c=sum(a,b);
    printf("sum is %d",c);
    return 0;
}
int sum(int a,int b) {
    int sum;
    sum=a+b;
    return sum;
}