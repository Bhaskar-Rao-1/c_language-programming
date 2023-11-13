#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;
    printf("sum of %d & %d is: %d\n",a,b,sum);
    printf("sub of %d & %d is: %d\n",a,b,sub);
    printf("mul of %d & %d is: %d\n",a,b,mul);
    printf("div of %d & %d is: %d (nearly)\n",a,b,div);

    return 0;
}