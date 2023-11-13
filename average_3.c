#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    float r = a+b+c;
    r = r/3;
    printf("%f",r);

    return 0;
}
