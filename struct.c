#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[100];
    float cgp;
};
int main(){
    struct student s[2];
   s[0].roll=10;
   s[0].cgp=10.1;
   strcpy(s[0].name,"Bhaskara Rao");
    
    
    printf("%s\n",s[0].name);
    printf("%d\n",s[0].roll);
    printf("%f\n",s[0].cgp);

    s[1].roll=123;
    s[1].cgp=9.7;
    strcpy(s[1].name,"Bhanus Raj");
    printf("%s\n",s[1].name);
    printf("%d\n",s[1].roll);
    printf("%f",s[1].cgp);
    return 0;
}