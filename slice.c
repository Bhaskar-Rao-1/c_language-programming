#include<stdio.h>

void slice(char arr[],int n,int m);

int main(){
char arr[100]="Hello";
slice(arr,2,4);
return 0;
}
void slice(char arr[],int n,int m){
    char nw[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        nw[j]=arr[i];
    }
    nw[j]='\0';
    puts(nw);
}