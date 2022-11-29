#include<stdio.h>
void sum();//funjction declaring
void sum()
{
    int a,b,sum=0;  //function definition
    printf("enter the values\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nsum=%d",sum);


}
int main(){
sum();//function calling

}

