#include<stdio.h>

int main()
{
    int age =22;
    int *ptr=&age;
    (*ptr)++;
    printf("%d\n",age);
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);
    printf("%d\n",age);

    
    return 0;
}