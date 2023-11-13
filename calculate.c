#include<stdio.h>

void calculate( float value);

int main()
{
    float value = 100.0;
    calculate(value);
}

void calculate(float value)
{
    value = value + (0.18 * value);
    printf("%f",value);
}