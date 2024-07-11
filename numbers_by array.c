#include<stdio.h>
void print(int arr[],int n);
int main()
{
    int arr[6];
    for(int i=0; i<6; i++) {
        printf("%d index",i);
        scanf("%d",&arr[i]);
    }

    print(arr,6);
    return 0;
}
void print(int arr[],int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }

}