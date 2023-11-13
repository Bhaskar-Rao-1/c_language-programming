#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s={10,10.1,"Bhaskara Rao"};
    printf("%s\n",s.name);
    printf("%d\n",s.roll);
    printf("%f",s.cgpa);
    return 0;
}