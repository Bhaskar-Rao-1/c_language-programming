#include<stdio.h>

int maxlength(int arr[],int n);

int main()

{
    int arr[]={1,2,3,4,5,6};
    printf("%d",maxlength(arr,6));
    }
int maxlength(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}