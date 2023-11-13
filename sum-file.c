#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    int m;
    fscanf(fptr,"%d",&m);
    fclose(fptr);
    fptr=fopen("test.txt","w");
    int a=m+n;
    fprintf(fptr,"%d",a);
    fclose(fptr);
    return 0;
}