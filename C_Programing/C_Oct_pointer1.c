/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int v=5,*ptr;
ptr=&v;
printf("address of v =%0x",ptr);
printf("\n v=%d",v);
printf("\n content of pv = %0x",&v);
printf("\n content of v =%d",*ptr);
return 0;
}

