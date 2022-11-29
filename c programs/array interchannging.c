#include<stdio.h>
int main()
{
int a[10],b[10],i,j,t;

printf("enter the array A:");
for(i=0;i<5;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter the array B:");
for(i=0;i<5;i++)
{
printf("b[%d]=",i);
scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
{
t=a[i];
a[i]=b[i];
b[i]=t;
}
printf("inter changed array A is:");
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf(" \n array B: ");
for(i=0;i<5;i++)
printf("%d ",b[i] );

}
