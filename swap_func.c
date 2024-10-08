#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    printf("a and b \n");
    scanf("%d %d",&a,&b);
    printf("before swap a is %d b is %d\n",a,b);
    swap(a,b);
    return 0;
}
void swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swap a is %d b is %d",a,b);
}