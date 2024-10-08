#include<stdio.h>

int main()
{
    int day;
    printf("enter day(1-7):\n");
    scanf("%d",&day);

    switch(day) {
    case 1:
        printf("You choose 1 and 1 for monday");
        break;
    case 2:
        printf("You choose 2 and 2 for tuesday");
        break;
    case 3:
        printf("You choose 3 and 3 for wedday");
        break;
    case 4:
        printf("You choose 4 and 4 for thurday");
        break;
    case 5:
        printf("You choose 5 and 5 for friday");
        break;
    case 6:
        printf("You choose 6 and 6 for saturday");
        break;
    case 7:
        printf("You choose 7 and 7 for sunday");
        break;
    default :
        printf("chhosen wrong option ");
    }
    return 0;
}