#include<stdio.h>

int main()
{
    int n;
    printf("Enter num ");
    scanf("%d",&n);
    int r = 0;
    for(int j = n;j >= 0;j--)
    {
        r = r + j;
        printf("%d\n",j);
    }
    printf("sum is %d\n",r);

    return 0;
}