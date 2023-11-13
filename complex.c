#include<stdio.h>

struct complex{
    int real;
    int img;
};
int main(){
    struct complex n={1,2};
    struct complex *ptr=&n;
    printf("real is %d",ptr->real);
    printf("imaginary is %d",ptr->img);
 return 0;   
}