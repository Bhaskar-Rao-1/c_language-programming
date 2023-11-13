#include<stdio.h>

int scan(int arr[],int n);
int print(int arr[],int n);
int count(int arr[],int n);

int main()
{
      int arr[5];
scan(arr,5);
print(arr,5);



      printf("\n%d\n",count(arr,5));
      return 0;
}
int scan(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}
int count(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
      if((arr[i] % 2) != 0 ) {
        c++;
      }
    }
    return c;
}
int print(int arr[],int n){
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}