#include<stdio.h>

int main()
{
    float side;
    printf("Enter side of the square:");
    scanf("%f",&side);

    float area=side * side;
    printf("Area of the square is %f",area);

    return 0;
}