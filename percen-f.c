#include<stdio.h>

int percentage(int mat,int phy,int sci,int san);

int main()
{
   printf("%d",percentage(99,98,88,97));
}
int percentage(int mat,int phy,int sci,int san)
{
    int per = (mat + phy + sci + san)/4;
    return per;
}