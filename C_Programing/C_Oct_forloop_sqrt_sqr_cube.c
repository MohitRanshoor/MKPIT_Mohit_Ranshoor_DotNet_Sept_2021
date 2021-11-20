/* This is For_loop_Program */
/* pre processor directive */
#include<stdio.h>
#include<math.h>

/* global variable declaration */
int main()
{
int i=1,n;
printf("enter the number 1 to n");
 scanf("%d",&n);
 printf("\n num square cube");
 for(;i<=n;i++)
 {
 printf("\n %d    %d    %d\n",i,  i*i,  i*i*i);
 }
return 0;
}

