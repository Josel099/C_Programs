#include<stdio.h>
int factorial(int); 
int main()
{
    int r,n;
    printf("\nenter the number :");
    scanf("%d",&n);
    r=factorial(n);
    printf("\n result is:%d\n",r);

}
int factorial(int n)
{
  int r;
if(n==0)
return 1;
else 
 {
   r=n*factorial(n-1);
   return r;  
  }
}
