/* This is while_loop_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i=0, esum=0, osum=0;

   while(i<=100)
      {
	  i++;
	  if(i%2==0)
	  {
	  esum+=i;
	  }
	  else
	  {
	  osum+=i;
	  }
	 }
	  printf("The sum of even number =%d and sum of odd number is =%d",esum,osum);   
	  	     	   	      
	
return 0;
}

