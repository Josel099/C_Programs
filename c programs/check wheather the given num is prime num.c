#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
 {
    if(n%i==0)
    {
    count++;
    printf("the number is not prime");
    break;
    }
 }
 if(count==0)
 {

   if(n==1)
   printf("1 is not a prime and non prime");
   else
    printf("it is a prime num");
 }


}
