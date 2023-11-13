#include<stdio.h>
 #include<string.h>
 struct student
 {
   int roll;
   char name[100];
   float percent;
 };
 int main(){

    struct student s;
    s.roll=10;
    strcpy(s.name,"Bhaskara Rao");
    printf("%s",s.name);
    return 0;
    
 }