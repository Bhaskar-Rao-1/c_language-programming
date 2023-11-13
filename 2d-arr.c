#include<stdio.h>

void scan(int marks[][3],int n,int m);
void print(int marks[][3],int n,int m);

int main()
{
    int marks[2][3];
    scan(marks,2,3);
    print(marks,2,3);
}
void scan(int marks[][3],int n,int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            printf("enter [%d][%d] ",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
}
void print(int marks[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",marks[i][j]);
        }
    }
}
