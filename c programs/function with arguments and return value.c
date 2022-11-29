#include<stdio.h>
int sum();
int sum(int a,int b)//the int using only where return something in the function
{
a=a+b;
printf("sum=%d",a);
return a/2;
}
void main()
{
int a,b,c;
printf("enter the numbers\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("\n sum/2+2=%d",c+2);
}
