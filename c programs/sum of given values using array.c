#include<stdio.h>
int main()
{
int a[150],sum=0,i,limit;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter the values\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);

}
