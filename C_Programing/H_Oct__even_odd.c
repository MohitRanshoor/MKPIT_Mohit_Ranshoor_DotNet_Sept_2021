/* This is watch_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int i,n;
  printf("Enter 10 numbers");
  for (i=1;i<=10;i++)
  {
  scanf("%d",&n);
  if(n%2==0)
  printf(" \tEven %d\n",n);
  else 
  printf(" Odd %d\n",n);
  }
 
return 0;
}

