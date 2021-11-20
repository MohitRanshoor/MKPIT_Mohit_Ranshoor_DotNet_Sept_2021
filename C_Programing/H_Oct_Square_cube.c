/* Find square and cube od 2 to 10 numbers*/
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i=2;
printf("Number  Square   Cube\n");
while(i<=10)
{
printf(" %5d  %5d   %3d\n",i,i*i,i*i*i);
i++;
}
 return 0;
}

