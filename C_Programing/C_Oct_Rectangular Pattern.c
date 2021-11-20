/* This is Nested_Loop2_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
    {
     for(j=5;j>=1;j--)
      {
         /*inner loop*/
          printf("%3d",j);
       }
	   printf("\n");
	 }
return 0;
}

