#include<stdio.h>
int main()
{
int i,j,a[100],n,t;
printf("enter the number of elements in the arrAY:");
scanf("%d",&n);
printf("enter the array :");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}

}
printf(" sorted array is :");
for(i=0;i<n;i++)
printf("     a[%d]=%d ",i,a[i]);

}
