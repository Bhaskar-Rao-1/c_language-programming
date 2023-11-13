#include<stdio.h>

int main()
{
    //by logical operator
    int a=10,b=20;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a is %d & b is %d ",a,b);
    return 0;
  /*  //by third variable
    int t;
    t=a;
    a=b;
    b=a;

    //by arthmetic operatoer
    a=a+b;
    b=a-b;
    a=a-b;
    */
    

}