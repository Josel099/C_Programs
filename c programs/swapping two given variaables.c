#include<stdio.h>
int main()
{
int i,n,temp;
printf("enter two numbers which want to be swapped:\n");
scanf("%d%d",&i,&n);
printf("i=%d",i);
printf("\n n=%d",n);
temp=i;
i=n;
n=temp;
printf("\n the swapped numbers:\ni=%d \nn=%d",i,n);//printf("\nn=%d",n);
}
