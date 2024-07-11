#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n) {
    if(n==1) {
        return 1;
    }
    int SumNm1=sum(n-1);
    int sumn=SumNm1+n;
    return sumn;
}