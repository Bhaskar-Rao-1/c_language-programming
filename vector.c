#include<stdio.h>
struct vector{
    int x;
    int y;

};
void cal(struct vector v1,struct vector v2,struct vector sum);



int main(){
    struct vector v1={5,8};
    struct vector v2={3,7};
    struct vector sum={0};
  cal(v1,v2,sum);
}
void cal(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("%d ",sum.x);
    printf("%d ",sum.y);
}