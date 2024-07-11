#include<stdio.h>
int main(){
  int n;
printf("Enter number to print table\n");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++){
printf("%d X %d = %d\n",n,i,n*i);
}
return 0;
}
