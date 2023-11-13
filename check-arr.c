#include<stdio.h>
void check(int arr[],int m,int n);
int main()
{
    int arr[]={1,2,1,2,3,1,1,1};
    check(arr,1,8);

}
void check(int arr[],int m,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
           c++;
        }
    }
    printf("%d",c);
}