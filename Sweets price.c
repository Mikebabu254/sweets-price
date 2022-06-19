//sweets-price
/*Just for fun....a c program
A C program that calculates the price of sweets and gives out the price*/
#include<studio.h>
main()
{
int a,b;
printf("how many sweets do you want\n");
scanf("%d",&a);
b=a*10;
if(a<==-1)
{
printf("invalid input");
}
else if(a==0)
printf("it seems you don't like sweets\nwe have new sweet sweets you can try them at affordable price\n);
}
else if(a>==1)
{
printf("give the cashier %d",b);
}
else if(a>==30)
{
printf("we don't sell that much sweet in retail\ncan you access for wholesale price\n1:yes\n2:no");
}
