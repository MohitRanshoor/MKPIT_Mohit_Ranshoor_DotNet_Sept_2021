/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int A[100],B[100],C[100],i,j=0,k=0;
 printf("Enter the elements of array");
 for(i=0;i<10;i++)
   {
    scanf("%d",&A[i]);
	}
 for(i=0;i<10;i++)
    {
      if(A[i]%2==0)
	  {
 	   B[j]=A[i];
	   j++;
	   }
	   else
	   {
	   C[k]=A[i];
	   k++;
	   } 
	}
printf("\n The even numbers in array B are =%d and it is as follows\n",j);
for (i=0;i<j;i++)
{
 printf("%d\n",B[i]);
}
printf("\n The even numbers in array B are =%d and it is as follows\n",k);
for (i=0;i<k;i++)
{
 printf("%d\n",C[i]);
}


return 0;
}

