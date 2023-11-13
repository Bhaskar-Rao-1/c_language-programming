#include<stdio.h>
int main()
{
    int a;
    short m;
    long  b;
    long c;
    double d;
    long double e;
    printf("size of short is %zu\n",sizeof(m));
    
    printf("size of int %zu\n",sizeof(a));
    printf("size of long %zu\n",sizeof(b));
    printf("size of long long %zu\n",sizeof(c));
    printf("size of double %zu\n",sizeof(d));
    printf("size of long long double %zu\n",sizeof(e));

    return 0;
}