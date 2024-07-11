#include<stdio.h>

int main()
{
    float price[3];
    printf("enter price of tamato\n");
    scanf("%f",&price[0]);
    printf("enter price of Onion\n");
    scanf("%f",&price[1]);
    printf("enter price of ladies finger\n");
    scanf("%f",&price[2]);
    printf("price of tamatois %f\n",price[0]+(0.18*price[0]));
     printf("price of onion is %f\n",price[1]+(0.18*price[1]));
     printf("price of ladies finger is %f\n",price[2]+(0.18*price[2]));
    return 0;
}