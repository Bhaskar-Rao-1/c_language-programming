#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    char password[100];
    printf("enter password\n");
    scanf("%s", password);

    salting(password);
    return 0;
}
void salting(char password[]) {
    //char newpass[100]
    char salt[]="123";
    //strcpy(newpass, password);
    strcat(password,salt);
    puts(password);
}