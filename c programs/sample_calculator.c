#include<stdio.h>
#include<ctype.h>
void main()
{
    double a,b;
   char operand;
   printf("enter the operand(+,-,*,/) which you want to be perform operations:");
   scanf("%c",&operand);
   switch (operand)
   {
   case '+':
      printf("enter the numbers:");
      scanf("%.21f%.21f",&a,&b);
      printf("%.21f%c%.21f=%1f",a,operand,b,a+b);
    break;
   
   default: 
    printf("invalid input");
    break;
   }

}