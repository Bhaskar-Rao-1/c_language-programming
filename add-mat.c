#include<stdio.h>
void matrixadd(int add1[][3],int add2[][3],int res[][3],int n);
int main()
{
        int add1[3][3]={{1,2,3},
                         {4,5,6},
                        {7,8,9}
             
        };
        int add2[3][3]={{1,2,3},
                         {4,5,6},
                         {7,8,9}

        };
        int res[3][3];
        matrixadd(add1,add2,res,3);
}
void matrixadd(int add1[][3],int add2[][3],int res[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        res[i][j]=add1[i][j]+add2[i][j];
        printf("%d\t",res[i][j]);
    }
    printf("\n");
}
}