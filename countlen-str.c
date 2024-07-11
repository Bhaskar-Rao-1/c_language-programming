#include<stdio.h>
int countstr(char star[]);
int main()
{
    char count[100];
    fgets(count,100,stdin);
    puts(count);
    printf("%d",countstr(count));
    return 0;
}
int countstr(char star[]) {
    int count=0;
    for(int i=0; star[i]!='\0'; i++) {
        count++;
    }
    return count-1;
}