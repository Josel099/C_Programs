#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("print the multi dimensional array\n") ;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }


    }
    printf("\n \n0the multidimensionel array is \n\n\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t ",a[i][j]);
        }
         printf("\n");

    }

//not worked yet


}
