#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float));
    ptr[0]=9.87;
    ptr[1]=787.565;
    ptr[2]=5.34;
    ptr[3]=34545.53;
    ptr[4]=34.242;

    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);

    }
    return 0;
}