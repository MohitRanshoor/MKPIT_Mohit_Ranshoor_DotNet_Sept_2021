/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>
#include<math.h>
/* global variable declaration */
int main()
{
int n,x,temp,i=0,Decimal=0;
printf("Enter Binary Number");
scanf("%d",&n);
   while(n!=0)
      {
	  temp=n%10;
	  x=temp*pow(2,i);
	  Decimal+=x;
	  n=n/10;
	  i++;
       	     
	  }
	  printf(" \nthe Decimal number is=%d \n",Decimal);
 	   	      
	
return 0;
}

