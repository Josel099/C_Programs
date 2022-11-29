#include<stdio.h>
int main()
{
int s,i,j,count;
printf("enter  the limit:  ");
scanf("\n%d",&s);
for(j=3;j<=s;j++)
{
    if(j==3)
      printf("\n2");
count=0;
for(i=2;i<j;i++)
 {
    if(j%i==0)
    {
    count++;
    break;
    }
 }
     if(count==0)
        printf("\n%d",j);
}
}


