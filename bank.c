#include<stdio.h>
struct bank{
    int acc;
    char name[100];
};
void enter(struct bank *s){
    for(int i=0;i<3;i++){
        scanf("%d",&s[i].acc);
        scanf("%s",s[i].name);
    }
    
}
void print(struct bank s){
      printf("%d\n %s\n",s.acc,s.name)  ;
    }  
int main(){
    struct bank s[3];
    enter(s);
   for(int i=0;i<3;i++){
    print(s[i]);
   }
    return 0;
}