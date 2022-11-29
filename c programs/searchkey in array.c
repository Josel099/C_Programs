#include<stdio.h>
int main()
{

    int a[5],s,i,count=0;
    printf("enter the values\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    printf("enter the searchkey:");
    scanf("%d",&s);

    for(i=0;i<5;i++)
    {
        if(a[i]==s)
        {
            count++;
            printf("the given search key in %d th position",i+1);
            break;
         }
    }
    if(count==0)
        printf("the given searchkey is not in the array");
    }


