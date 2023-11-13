#include<stdio.h>

void cal(int a,int b,int *sum,int *pro,int *avg);

int main()
{
    int a = 3,b = 4;
    int sum,pro,avg;
    cal(a,b,&sum,&pro,&avg);
    printf("%d\n",sum);
    printf("%d\n",pro);
    printf("%d",avg);
    return 0;
}
void cal(int a,int b,int *sum,int *pro,int *avg)
{
    *sum = a + b;
    *pro = a * b;
    *avg = *sum/2;

}
