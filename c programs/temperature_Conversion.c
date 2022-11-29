#include<stdio.h>
#include<stdio.h>
void main()
{
    float c,f;
    char unit;
printf("which temperarure format do you want to be converted(c/f):");
scanf("%c",&unit);
if(unit=='c'){
printf("enter the temperature in degree celsious:");
scanf("%f",&c);
f=(c*1.8)+32;
printf("\n%ffaranheat   ",f);
}
else 
   if(unit=='f')
{
    printf("enter the temperature in Faranheat:");
scanf("%f",&f);
c=(f-32)*0.556;
printf("\n%f degree celsious    ",c);
}
  else
   printf("invalid input    ");



}
