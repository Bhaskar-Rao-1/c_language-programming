#include<stdio.h>

int main()
{
     int n;
    printf("How many numbers to print:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
    printf("%d\n",i);
    }
    return 0;
}