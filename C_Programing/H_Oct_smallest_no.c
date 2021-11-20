/* This is smallest_Program */
/* pre processor directive */
#include<stdio.h>


/* global variable declaration */
int main()
{
  int a,b,c;
  printf("Enter any three numbers");
  scanf("%d %d %d",&a,&b,&c);
 if(a<b && a<c)
 {
  printf("The smallest number is %d",a);
  }
 else if(b<c)
 {
 printf("The smallest number is %d",b);
 }
 else 
 printf("The smallest number is %d",c);
return 0;
}

