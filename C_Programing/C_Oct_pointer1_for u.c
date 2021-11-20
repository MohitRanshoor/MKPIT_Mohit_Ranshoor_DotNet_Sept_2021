/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int u=10,*ptr;
ptr=&u;
printf("address of u =%0x",ptr);
printf("\n u=%d",u);
printf("\n content of pu = %0x",&u);
printf("\n content of u =%d",*ptr);
return 0;
}

