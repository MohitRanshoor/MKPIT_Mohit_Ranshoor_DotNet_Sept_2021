/* This is while_loop_with_area_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i=0, r, n;
float area;
printf("\nHow many times you want to calculate area of circle?\n");
scanf("%d"&n);
    while(i<=n)
      {
	  printf(" \nEnter the radius\n");
	scanf("%d",&r);
	area=3.14*r*r;
	 printf("The area of circle is =%0.2f",area);
	i++;
	 }
	    
	  	     	   	      
	
return 0;
}

