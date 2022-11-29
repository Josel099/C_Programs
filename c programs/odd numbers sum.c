#include<stdio.h>
int main()
{
int sum=0,n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(i%2==1)
{
sum=sum+i;
}
}
printf("%d",sum);
}
