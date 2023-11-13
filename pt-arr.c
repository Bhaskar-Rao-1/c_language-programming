#include<stdio.h>
int main()
{
    int aadhar[5];
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index ",i);
        scanf("%d",ptr+i);//&aadhar[i]
    }
    for(int i=0;i<5;i++){
        printf("index is %d\n",*(ptr+i));//aadhar[i]
    }
    return 0;
}