#include<stdio.h>

struct student
{
    int roll;
    float cgp;
    char name[100];
};

int main(){
     struct student s={10,10.1,"Bhaskara Rao"};
     struct student *ptr=&s;
     printf("%f n",(*ptr).cgp);
     printf("%d",ptr->roll);
    return 0;
}