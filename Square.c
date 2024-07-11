#include<stdio.h>
int sq(int values);
int main()
{
    int values;
  printf("enter a number\n");
  scanf("%d",&values);
    printf("square is %d",sq(values));
    return 0;
}
int sq(int values) {
    values=values*values;
    return values;
}
