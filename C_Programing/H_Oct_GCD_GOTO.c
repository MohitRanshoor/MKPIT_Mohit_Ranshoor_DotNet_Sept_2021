/* This is GCD_no._Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
  int a,b;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
  X1: if(a==b)
  goto X2;
  while (a!=b)
  {
    if (a>b)
    {
     a=a-b;
    }
   else 
    {
     b=b-a;
    }
  }
  X2:printf(" The GCD number is %d",a); 
  
return 0;
}

