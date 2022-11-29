#include<stdio.h>
int main()
{
    int i,n,sum,k;
    float avg;
    printf("enter the count of numbers which want to be calculate the avg:\n");
    scanf("%d",&n);
   printf("enter the numbers which want to be calculate  the average:\n");
   sum=0;
   k=0;
   for(i=0;i<n;i++)
   {
    scanf("%d",&k);
    sum+=k;
   }
   printf("the sum is:%d\n",sum);
   avg=sum/n;
   printf("the average is :%f",avg);




}
