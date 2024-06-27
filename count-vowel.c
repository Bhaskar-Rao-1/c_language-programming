#include<stdio.h>
int countvowel(char str[]);
int main()
{
    char str[100];
    fgets(str,100,stdin);
    printf("%d",countvowel(str));
    return 0;
}
int countvowel(char str[]) {
    int count=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'
                ||str[i]=='o'||str[i]=='u') {
            count++;
        }
    }
    return count;
}