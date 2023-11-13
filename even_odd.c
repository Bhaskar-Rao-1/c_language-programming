#include<stdio.h>

int main()
{
    //by logical and operation'&'
    int n=1002;
    if((n&1)== 0)
    {
        printf("%d is Even",n);
    }
    else{
        printf("%d is Odd",n);
    }

    return 0;


}