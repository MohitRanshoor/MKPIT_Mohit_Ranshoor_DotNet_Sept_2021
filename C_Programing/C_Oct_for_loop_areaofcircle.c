/* This is For_loop_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i,r,n;
float area;
printf("\n How many times you want to calculate area of circle?\n");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\nEnter the radius of circle\n");
 scanf("%d",&r);
 printf("\nThe area of circle is = %0.3f",3.14*r*r);
 }
return 0;
}

