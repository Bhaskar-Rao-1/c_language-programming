#include<stdio.h>

int main()
{
    int side;
    printf("enter side");
    scanf("%d",& side);
    for(int i=1; i<=side; i++) {
        for(int j=1; j<=side; j++) {
            if(i==1||i==side||j==1||j==side)
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}