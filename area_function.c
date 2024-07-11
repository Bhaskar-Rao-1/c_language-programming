#include<stdio.h>
void square(int n);
void rectangle(int l,int b);
void circle(float r);
int main()
{
    int n;
    printf("1.for are of square\n");
    printf("2.for are of rectangle\n");
    printf("3.for are of circle\n");
    scanf("%d",&n);
    if(n==1) {
        int n;
        printf("enter square side\n");
        scanf("%d",&n);
        square(n);
    }
    else if(n==2) {

        int l,b;
        printf("enter length and breadth\n");
        scanf("%d %d",&l,&b);
        rectangle(l,b);
    }

    else if(n==3) {
        float r;
        printf("enter circle radius,\n");
        scanf("%f",&r);
        circle(r);
    }
    else {
        printf("enter valid one\n");
    }
    return 0;
}
void square(int n) {
    printf("area of square is %d\n",n*n);
}
void rectangle(int l,int b) {
    printf("area of rectangle %d\n",l*b);
}
void circle(float r) {
    printf("area of circle %f",3.14*r*r);
}