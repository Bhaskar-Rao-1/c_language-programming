#include<stdio.h>
void namestey();
void bonjour();
int main()
{


    char c;
    printf("enter i for Indian and f for french\n");
    scanf("%c",&c);
    if(c=='i'||c=='I') {
        namestey();
    }
    else if(c=='f'||c=='F') {
        bonjour();
    }
    else printf("enter valid one\n");
    return 0;
}
void namestey() {
    printf("namestey");
}
void bonjour() {
    printf("bonjour");
}