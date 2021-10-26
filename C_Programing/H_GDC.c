#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
  A1: if(a==b)
  goto A2;
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
  A2:printf(" The GCD number is %d",a); 
  
return 0;
}

