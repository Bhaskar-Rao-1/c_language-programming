#include<stdio.h>
int count(int arr[],int n);
int main()
{
    int arr[]= {1,2,3,4,5,6};
    int s=count(arr,7);
    printf("%d",s);
    return 0;
}
int count(int arr[],int n) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(arr[i]%2!=0) {
            count++;
        }
    }
    return count;
}