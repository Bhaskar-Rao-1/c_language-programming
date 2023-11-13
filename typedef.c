#include<stdio.h>

typedef struct student {
    int roll;
    float cgp;
    char name[100];
}stu;

int main(){
    stu s;
    s.roll=10;
    printf("%d",s.roll);
    return 0;
}