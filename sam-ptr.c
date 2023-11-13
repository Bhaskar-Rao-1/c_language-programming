#include<stdio.h>

void ptr(int *n);

int main()
{
   int n = 10;
   ptr(&n);
   printf("%u",&n);
   return 0;
}
void ptr(int *n){
    printf("%u\n",&(*n));
    
}