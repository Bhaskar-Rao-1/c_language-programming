#include<stdio.h>

void square(int *n);

int main()
{
    int n = 4;
    square(&n);
    printf("%d",n);
    return 0;

}
void square(int *n){
    *n = (*n) * (*n);
    printf("%d\n",*n);
}