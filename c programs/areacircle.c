#include<stdio.h>
#include<math.h>
void  main()
{
    const float pi=3.14;
    float r,a;
    printf("enter the radious of the circle:");
    scanf("%f",&r);
    a=pi*pow(r,2);
    printf("area of the circle:%f",a);
}