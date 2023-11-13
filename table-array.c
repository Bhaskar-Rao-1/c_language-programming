#include<stdio.h>

void table(int arr[][10],int n,int m,int num);

void print(int arr[][10],int n,int m);
int main()
{
int arr[2][10];
table(arr,0,10,2);
table(arr,1,10,3);
print(arr,0,10);
print(arr,1,10);
/*or also to print
for(int i=0;i<10;i++){
    printf("%d\t",arr[0][i]);
}
for(int i=0;i<10;i++){
    printf("%d\t",arr[i][i]);
}
*/
}
void table(int arr[][10],int n,int m,int num){
    for(int i=0;i<m;i++){
       arr[n][i]=num*(i+1);
    }
    
}
void print(int arr[][10],int n,int m){
    for(int i=0;i<m;i++){
        printf("%d\t",arr[n][i]);
    }
    printf("\n");
}