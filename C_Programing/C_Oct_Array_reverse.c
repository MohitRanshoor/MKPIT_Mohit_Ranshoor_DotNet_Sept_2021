/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int A[]={1,2,3,4,5},B[]={26,37,38,59,10},C[10],i,j;

 for (i=0;i<10;i++)
    {
      if(i<5)
	  {
 	   C[i]=A[i];
	   }
	   else
	   {
	   j=i-5;
	   C[i]=B[j];
	   } 
	}
printf("\n Array C is as follows");
for (i=0;i<10;i++)
{
printf("%4d",C[i]);
}
printf("\n Array C in reservers is as follows");
for (i=9;i>=0;i--)
{
printf("%4d",C[i]);
}
return 0;
}

