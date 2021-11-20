/* This is Decimal to binary._Program */
/* pre processor directive */
/*#include<stdio.h>
/* global variable declaration */
/*
int main()
{
 int n=65,x;
  printf("The binary number is ");
  while(
   n=n/2;
 x=n%2;
 printf("%d",x);
 
 
 return 0;
}*/

#include <stdio.h>
int main()
{
  int n=65, c, k;

  

  printf("%d in binary number system is:\n", n);

  for (c = 10; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
  }

