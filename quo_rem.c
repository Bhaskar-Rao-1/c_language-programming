#include<stdio.h>

int main()
{
    float divident,divisor,reminder;
    printf("Enter any divident:");
    scanf("%d",&divident);

    printf("enter divisor:");
    scanf("%d",&divisor);
    
    reminder = divident/divisor;

    printf("Reminder is : %.2f",reminder);

    return 0;
}