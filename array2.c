#include<stdio.h>

int main()

{
    int age=22;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u\n",ptr-_ptr);//we can sub from one other
    _ptr=&age;//we can compare each other
    printf("%u\n",_ptr==ptr);
    printf("%u",*_ptr);

return 0;
}