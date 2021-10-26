#include<stdio.h>

	int main()
{
 		int n;
 	 printf("Enter any number to check it is zero or positive or negative and even or odd");
 	 scanf("%d",&n);
  
	 if(n==0)
 
 	  printf("The number is zero");
  
 	else if(n>=0)
 
 	printf("The number %d is positive",n);
 
	 else
 
	 printf("The number %d is negative",n);
 
		 if(n%2==0)
 
	 printf("The number %d is even",n);
 
	 else
 
	 printf("The number %d is odd",n);
 
return 0;
}

