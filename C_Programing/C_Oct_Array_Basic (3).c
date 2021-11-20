/* This is Electric bill_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
  int A[50],i;
 /* printf("\n enter 5 numbers");*/
  for (i=0;i<50;i++)
  {
 /* scanf("%d",&A[i]);*/
 A[i]=i*i+2;
   }
	printf("\n Given array is");
	for (i=0;i<50;i++)
	{
	printf("\t\t%5d",A[i]);
	}
	
	return 0;
}
  

