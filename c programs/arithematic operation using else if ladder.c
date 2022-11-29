#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("operations\n1.addition\n2.substraction\n3.multiplication\n4.division\nselect which operation u want to be performed:\n");
    scanf("%d",&c);
    if (c==1)
    printf("sum=%d",a+b);
    else if(c==2)
        printf("balance=%d",a-b);
    else if(c==3)
        printf("product=%d",a*b);
    else if(c==4)
        printf("dividend=%d",a/b);
    else printf("ninakku option koduthekkuna edukkan okkilliyooo? adichu chevikutty pottikkum kettodaaa.....");
}
