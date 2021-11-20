/* This is while_loop_with_area_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i=0, r;
float area;

    while(i<5)
      {
	  printf(" \nEnter the radius\n");
	scanf("%d",&r);
	area=3.14*r*r;
	 printf("The area of circle is =%0.2f",area);
	i++;
	 }
	    
	  	     	   	      
	
return 0;
}

