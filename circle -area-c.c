#include<stdio.h>

int main()
{
    int radius;
    
    printf("enter square side\n");
    scanf("%d",&radius);
    
    float area=3.14*radius*radius;
    
    printf("area of square is %f",area);
    
    
    return 0;
}