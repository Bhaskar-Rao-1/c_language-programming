#include<stdio.h>

int main()
{
    printf("enter number");
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=10;i++){
    printf("%d X %d = %d\n",n,i,n*i);
    
    }
    return 0;
}