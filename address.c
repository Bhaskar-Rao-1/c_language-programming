#include<stdio.h>

struct address {
    int house;
    int block;
    char city[100];
    char state[100];
};
void enter(struct address *s);

void print(struct address s);

int main(){
    struct address s[5];
    enter(s);
for(int i=0;i<5;i++){
    print(s[i]);
}
    return 0;
}
void enter(struct address *s){
    for(int i=0;i<5;i++){
        printf("Enter %d person details",i+1);
        scanf("%d",&(s[i].house));
        scanf("%d",&(s[i].block));
        scanf("%s",s[i].city);
        scanf("%s",s[i].state);
    }
   /* for(int i=0;i<5;i++){
    print(s[i]);
    } */ 
}
void print(struct address s){
   
        printf("%d\n %d\n %s\n %s\n",s.house,s.block,s.city,s.state);
    
}