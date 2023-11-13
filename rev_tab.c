#include<stdio.h>

int main()
{
    int n;
    printf("Enter ");
    scanf("%d",&n);

    for(int j = 10; j >= 1; j--)
    {
        printf("%d X %d = %d\n",n,j,n*j);
    }
    return 0;
}