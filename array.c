#include<stdio.h>

int main()
{
    int marks[6];
    printf("enter phy marks\n");
    scanf("%d",&marks[0]);
    printf("enter chem marks\n");
    scanf("%d",&marks[1]);
    printf("enter maths marks\n");
    scanf("%d",&marks[2]);
    printf("enter eng marks\n");
    scanf("%d",&marks[3]);
    printf("enter san marks\n");
    scanf("%d",&marks[4]);
    
    
    printf("phy %d, che %d, mat %d eng %d san %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}