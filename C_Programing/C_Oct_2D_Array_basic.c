/* This is Decimal to binary_Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 int m,n,p,q,A[10],B[10];

printf("\n Enter No. of rows matrix A\n",m);
scanf("%d",&m);
printf("\n Enter No. of coloumns matrix A\n",n);
scanf("%d",&n);
printf("\n Enter No. of rows matrix B\n",p);
scanf("%d",&p);
printf("\n Enter No. of coloumns matrix A\n",q);
scanf("%d",&q);
if(n==p)
printf("\n multiplication is possible\n");
else
printf("\n multiplication is not possible");

return 0;
}

