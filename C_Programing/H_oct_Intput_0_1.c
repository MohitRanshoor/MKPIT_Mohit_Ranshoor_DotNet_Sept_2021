/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int A[10],i;

 for (i=0;i<10;i++)
    {
      if (i%2==0)
	  {
 	   A[i]=0;
	   }
	   else
	   {
	   A[i]=1;
	   } 
	}
printf("\n Array A is as follows");
for (i=0;i<10;i++)
{
printf("%4d",A[i]);
}

return 0;
}

