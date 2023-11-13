#include<stdio.h>

float square(float side);
float triangle(float h,float b);
float circle(float radius);
float rectangle(float l,float b);

int main() //what we giving return type for function prototype we have to use that format specifier  value in main function
{
    printf("%f\n",square(4));
    printf("%f\n",triangle(10,3));
    printf("%f\n",circle(5));
    printf("%f",rectangle(7,4));

     return 0;
}

float square(float side)
{
    int a;
    a = side * side;
    return a;
}

float triangle(float h,float b)
{
    float a = 0.5 * h * b;
    return a;
}

float circle(float radius)
{
    float a = 3.14 * radius * radius;
    return a;
}
float rectangle(float l,float b)
{
    float a = l * b;
    return a;
}