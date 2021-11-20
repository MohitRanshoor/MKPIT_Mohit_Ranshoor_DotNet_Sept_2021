/* This is Electric bill_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
  int A[5],i;
  printf("\n enter 5 numbers");
  for (i=0;i<5;i++)
  {
  scanf("%d",&A[i]);
   }
	printf("\n Given array is");
	for (i=0;i<5;i++)
	{
	printf("%3d",A[i]);
	}
	
	return 0;
}
  

