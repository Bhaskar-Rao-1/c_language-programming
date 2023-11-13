#include<stdio.h>
#include<math.h>

int main(){
    int a,m,n,r,c = 0;
	printf("Enter\n");
	scanf("%d",&a);//12
    m = a * a;//144

	while(m > 0){
		n = m % 10;
		c = c * 10 + n;
		m = m / 10;//441
	}
    c=sqrt(c);//21
    while(c > 0){
        n = c % 10;
        r = r * 10 + n;
        c = c / 10;//12
    }
    if(r == a){
        printf("adam");
    }
	
	return 0;
}