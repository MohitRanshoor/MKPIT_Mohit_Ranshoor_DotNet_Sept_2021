/* This is switch_digit_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int i,f0=0,f1=1,f2,n;
   printf("Enter the value of series\n");
  scanf("%d",&n);
  printf("\n The fibonicic series is");
  printf("%d,%d",f0,f1);
 
  for(i=1;i<=n-2;i++)
  {
   f2=f0+f1;
   printf(",%d",f2);
   f0=f1;
   f1=f2;
   }
return 0;
}

