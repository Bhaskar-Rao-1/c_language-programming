#include<stdio.h>

int main()
{
    //ternary operator
    int age;
    printf("enter age:\n");
    scanf("%d",&age);

    (age>=18)?printf("he can vote\n"):printf("he is child");
    return 0;
}