#include<stdio.h>

int main()
{
    int marks[3];
    printf("Enter prices\n");
    scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
   
    
    printf("%f\n",marks[0]+(0.18*marks[0]));
    printf("%f\n",marks[1]+(0.18*marks[1]));
    printf("%f\n",marks[2]+(0.18*marks[2]));
}