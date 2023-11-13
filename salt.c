#include<stdio.h>
#include<string.h>

void salt(char pass[]);

int main(){
    char pass[100]="Bhaskar";
    salt(pass);
    return 0;
}
void salt(char pass[]){
    char sa[]="123";
    strcat(pass,sa);
    puts(pass);
}