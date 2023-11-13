#include<stdio.h>
#include<stdlib.h>
//allocate memory at run time

int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=0;
    ptr[3]=3;
    ptr[4]=4;

    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}