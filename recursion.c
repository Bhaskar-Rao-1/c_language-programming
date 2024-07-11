#include<stdio.h>
void print(int c);
int main()
{
    print(5);
    return 0;
}
void print(int c) {

    if(c==0) {
        return ;
    }
    printf("hello\n");
    print(c-1);

}