/* This is Nested_Loop2_Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
  int n,i,m=0,flag=0;
  printf("Enter any number to check it is prime or not\n");
  scanf("%d",&n);
  m=n/2;
  for(i=2;i<=m;i++)
    {
     if(n%2==0)
		 {
          printf("Number is Prime ");
		  flag=1;
		  break;
		  }
		  }
		  if(flag==0)
		  printf("Number is not prime");
	  
	
return 0;
}

