#include<stdio.h>

int main()
{//array char cannpot be modified
//pointer chat can change
char *letter="Hello";
puts(letter);
letter="World";
puts(letter);

}