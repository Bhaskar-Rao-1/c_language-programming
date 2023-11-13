#include<stdio.h>

int main(){
	int n,i,j=1,r=1;
	printf("Enter: \n");
	scanf("%d",&n);
while(n>1){

	for(i=2;i<=n;i++){
      
		if(n%i==0){
		
			j=n/i;
			n=n/i;
			j=1*i;
			printf("%d\n",j);
          
		}
        r=r*j;
	break;
	}
  //break;
}

printf("r is %d\n",r);
	
	return 0;
}