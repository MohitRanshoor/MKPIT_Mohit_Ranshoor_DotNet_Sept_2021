/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int i,n,*A;
 
 printf("\n Name of array is address of first element of array\n");
 printf("\n Name of array is pointer to first element of array\n");
 printf("\n enter the size of array");
 scanf("%d",&n);
 A=(int *)malloc(n * sizeof(int));
 
 printf("\n enter %d elements of array using pointer notation\n",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",(A+i));  /*&A[i]*/
 }
 printf("\n Given array is");
  for(i=0;i<n;i++)
 {
 printf("\n address of A+i =%0x",A+i);
 printf("  data =%4d",*(A+i));
 }
  return 0;
 }





