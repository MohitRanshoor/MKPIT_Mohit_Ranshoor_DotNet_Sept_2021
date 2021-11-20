/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 short v=5, *ptr,u=10;
 char *pointer1,color='r';
 pointer1=&color;
 ptr=&v;
 printf("\n content of ptr =%d\n",&v);
 printf("\n content of v =%d\n", *ptr);
 printf("\n address stored in ptr is = %0x\n",ptr);
 ptr++;
 printf("\n current address stored in ptr is = %0x\n",ptr);
 printf("\n address of color =%0x\n",pointer1);
 printf("\n value of color using pointer1 =%c\n",*pointer1);
 pointer1++;
 printf("\n address stored in pointer 1 =%0x\n", pointer1);
 return 0;
 }





