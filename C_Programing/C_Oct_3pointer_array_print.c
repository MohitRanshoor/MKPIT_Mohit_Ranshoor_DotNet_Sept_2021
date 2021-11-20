/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int i,A[10];
 printf("\n enter 10 elements of array using pointer notation");
 printf("\n Name of array is address of first element of array");
 printf("\n Name of array is pointer to first element of array");
 for(i=0;i<10;i++)
 {
 scanf("%d",(A+i));  /*&A[i]*/
 }
 printf("\n Given array is");
 for(i=0;i<10;i++)
 {
 printf("%4d",*(A+i));
 }
  return 0;
 }





