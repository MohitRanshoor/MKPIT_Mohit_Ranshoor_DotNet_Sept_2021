/* This is Divisibel_by_5_Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
  int i;
  printf("The number divisible by five is\n");
  for(i=1;i<=100;i++)
  {
     if(i%5==0)
   {
    printf("%d\n",i); 
   }
  }
return 0;
}

