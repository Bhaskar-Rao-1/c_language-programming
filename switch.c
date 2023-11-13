#include<stdio.h>

int main()
{
    char day;
    printf("Enter day stating char: ");
    scanf("%c",&day);

    switch(day)
    {
        case 'm' : printf("MONDAY");
                break;
        case 't' : printf("TUESDAY");
                break;
        case 'w' : printf("WEDNESDAY");
                break;
        case 'T' : printf("TUESDAY");
                break;
        case 'f' : printf("FRIDAY");
                break;
        case 's' : printf("SATURDAY");
                break;
        case 'S' : printf("SUNDAY");
                break;
        default : 
                printf("Not a correct day");

    }
}