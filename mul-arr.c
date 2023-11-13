#include<stdio.h>

void mul(int mul1[][3],int mul2[][3],int res[][3],int n);

int main()
{
    int r,c;
    printf("enter r&c");
    scanf("%d%d",&r,&c);


int mul1[r][c];
int mul2[r][c];


printf("for 1st matrix");

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&mul1[i][j]);
    }
}


printf("for 2nd matrix");

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&mul2[i][j]);
    }
}


int res[3][3];
  mul(mul1,mul2,res,3);
}
void mul(int mul1[][3],int mul2[][3],int res[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=mul1[i][k]*mul2[k][j];
                
            }
        printf("%d\t",res[i][j]);   
        }
printf("\n");
    }
}