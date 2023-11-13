#include<stdio.h>
#include<stdlib.h>

void addelement(int arr[],int *size,int element);

int main()
{
    int arr[5]={1,2,3,4,5};
int currentsize=5;
    int nwele=10;
    addelement(arr,&currentsize,nwele);
    for(int i=0;i<currentsize;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
return 0;
}
void addelement(int arr[],int *size,int element){
    int newsize=(*size)+1;
    int *newarray=(int*)malloc(newsize*sizeof(int));
    if(newarray==NULL){
        printf("problem in creating new size");
    }
    for(int i=0;i<*size;i++){
        newarray[i]=arr[i];
    }
    newarray[*size]=element;
    free(arr);
    arr=newarray;
    *size=newsize;

}