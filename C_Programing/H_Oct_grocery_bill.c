/* This is grocery_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
int i,n,n1,n2,temp=0,sum=0;
  printf("Enter the grocery items \n");
  scanf("%d",&n);
  printf("price quantity");
  for (i=1;i<=n;i++)
  {
  scanf("%d",&n1);
  scanf("Rs.%d",&n2);
  temp=n1*n2;
  sum+=temp;
  }
  printf(" Total Bill = %d",sum);
  
 
return 0;
}

