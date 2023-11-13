#include<stdio.h>

int main()
{
int age = 22;// %p is format specifier for pointer
int *ptr = &age;
int _age = *ptr; 
printf("%d\n",_age);


printf("%u\n",*(&ptr));
printf("%u\n",&age);

char c  = 'c';
char *ptr3 = &c;
printf("%c\n",*ptr3);

float p = 9.97;
float *ptr1 = &p;
printf("%f\n",*ptr1);



return 0;
}