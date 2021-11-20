/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int n,binary=0,temp,i=1;
printf("Enter Decimal Number");
scanf("%d",&n);
    while(n!=0)
      {
	  temp=n%2;
	  binary=binary+(temp*i);
	  printf("Binary Value in between=%d",binary);
	  i=i*10;
	  n=n/2;
	   printf("n=%d",n);
	  }
	  printf(" \nthe binary number is=%d \n",binary);
	 
	    
	  	     	   	      
	
return 0;
}

