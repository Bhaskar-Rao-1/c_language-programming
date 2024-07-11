#include<stdio.h>
void print(char arr[]);
int main()
{
    char firstname[]="Bhaskara Rao";
    char lastname[]="Bantupalli";
    print(firstname);
    print(lastname);
    return 0;
}
void print(char arr[]) {
    for(int i=0; arr[i]!='\0'; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}