/* Degree to Fahrenheit conversion */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i=10,f;
printf("Degree to Fahrenheit converter\n Degree   Fahrenheit\n");
while(i<=100)
{
f=(i*1.8+32);
printf(" %5d   %3d\n",i,f);
i=i+5;
}
 return 0;
}

