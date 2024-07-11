#include<stdio.h>

int main()
{
    int i;
    for(i=1; ; i++) {

        printf("enter num\n");
        int n;
        scanf("%d",&n);
        if(n%2!=0) {
            break;
        }
    }
    return 0;
}