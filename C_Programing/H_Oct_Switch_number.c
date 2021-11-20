/* This is switch_digit_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int i,j;
  printf("Enter any two numbers");
  scanf("%d%d",&i,&j);
   i=i+j;
   j=i-j;
   i=i-j;
   printf("The the value i and j %d and %d",i,j);
return 0;
}

