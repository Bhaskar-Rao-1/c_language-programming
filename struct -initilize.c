#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[100];
    float cgpa;
};
int main()
{
    struct student ece={783839,"raju",9.4};
   

    printf("%s\n",ece.name);
    printf("%d\n",ece.roll);
    printf("%f\n",ece.cgpa);
  
    return 0;
}