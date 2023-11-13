#include<stdio.h>
int calt(int tab[][10],int n,int m,int num);
int print(int tab[][10],int n,int m);
int main()
{
    int table[2][10];
    calt(table,0,10,2);
    calt(table,1,10,3);
   for(int i=0;i<10;i++){
    printf("%d\t",table[0][i]);
   }
   printf("\n");
for(int i=0;i<10;i++){
    printf("%d\t",table[1][i]);
   }

}
int calt(int tab[][10],int n,int m,int num){
for(int i=0;i<m;i++){
    tab[n][i]=num*(i+1);
}
}
int print(int tab[][10],int n,int m){
    for(int i=0;i<m;i++){
        printf("%d\t",tab[n][i]);
    }
    printf("\n");
}
