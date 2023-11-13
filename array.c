#include<stdio.h>

int main()
{
    int marks[3];
    printf("Enter phys marks\n");
    scanf("%d",&marks[0]);

    printf("Enter mat\n");
    scanf("%d",&marks[1]);

    printf("Enter chem\n");
    scanf("%d",&marks[2]);


   for(int i=0;i<3;i++){

    printf("%d\n",marks[i]);
    }
    return 0;
}