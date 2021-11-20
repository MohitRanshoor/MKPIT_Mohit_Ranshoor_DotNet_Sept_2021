/* This is Nested_Loop2_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int i,j,k;
  for(i=5;i>=1;i--)
    {
     for(j=i;j>=1;j--)
      {
         /*inner loop*/
		 if(j%2!=0)
		 
          printf(" 1 ");
		  
		  else
		  printf(" 0 ");
       }
	   printf("\n");
	 }
return 0;
}
/*1 0 1 0 1 
  0 1 0 1 
  1 0 1 
  0 1 
  1*/

