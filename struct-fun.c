#include<stdio.h>
struct student 
{
   int roll;
   float cgp;
   char name[100];
};
//if we change value in fun then the value will not change overaall program(main)
void printinfo(struct student s);
//if we change value in main then  change in overall fun change and in main
int main(){
    struct student s={10,10.1,"Bhaskara Rao"};
    
    printinfo(s);
    printf("%d\n",s.roll);
    return 0;
}
void printinfo(struct student s){
    s.roll=120;
    printf("%d\n",s.roll);
    printf("%f\n",s.cgp);
    printf("%s",s.name);
    
}
