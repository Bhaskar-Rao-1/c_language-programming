#include<stdio.h>

float fah(float n);

int main()
{
    printf("%.2f",fah(132));
}
float fah(float n)
{
    float r = (n * 9/5) + 32;
    return r;
}