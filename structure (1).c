#include<stdio.h>
struct student {
    char name[100];
    int roll;
};
int main()
{
    struct student s1;
    int p= s1.roll=12;
    printf("%d",p);
    return 0;
}