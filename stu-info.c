#include<stdio.h>

int main(){
 FILE *fptr;
    fptr=fopen("stu.txt","w");
    char name[100];
    int roll;
    float cgp;
    printf("Enter name");
    scanf("%s",name);
    printf("Enter roll");
    scanf("%d",&roll);
    printf("Enter float");
    scanf("%f",&cgp);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",roll);
    fprintf(fptr,"%f",cgp);

    fclose(fptr);
    return 0;
}