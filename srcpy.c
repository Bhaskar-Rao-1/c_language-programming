#include<stdio.h>
#include<string.h>

int main(){
    char old[100];
    char new[100];
    fgets(old,100,stdin);
    strcpy(new,old);

puts(new);
}