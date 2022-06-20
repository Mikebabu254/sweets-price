//a C program that gives out the price of sweets
#include<stdio.h>
main()
{//starting of the C program
int sweets,price,bol,pac;//variable declaration
printf("how many sweets do you want?\n");
scanf("%d",&sweets);//prompt the user to enter number of sweet he/she wants.
price=sweets*10;//calculates the price of the sweet.
if(sweets<==29)
{//open of the first "if"
printf("give the cashier %d",price);
}/*close of the first"if"
sweets are less than 29 it will accept*/
else if(sweets>29)
{//opening of the second"if"
printf("please customer we don't sell that much sweets in here,unless you want a wholesale\ndo you want to access the wholesale price.\nif: yes press 1\n    no press any number\n");//ask the user to choose an option
scanf("%d",&bol);//buyer select the option he/she wants
if(bol<=0)
{//opening of the third "if"
printf("buy sweets less than 29\n");
}//closing of the third "if"
else if(bol>==2)
{//opening of the fourth "if"
printf("buy sweets less than 29\n");
}//closing of the fourth"if"
else if(bol==1)
{//opening of the fifth "if"
printf("how many packets do you want?\n");//prompt the user to input number of packet he/she wants
scanf("%d",&pac);
price=pac*250;//calculates the price of the packet the buyer wants
printf("give the cashier %d",price);//ask the buyer to give the cashier certain amount of money according to the packet 
}//closing of the fifth "if"
}//closing of the second "if"
}//ending of the program
