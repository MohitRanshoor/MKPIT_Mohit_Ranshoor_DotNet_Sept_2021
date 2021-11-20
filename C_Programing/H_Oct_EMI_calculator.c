/* This is smallestno._Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float p, r, temp, emi;
 printf("Enter principal amount");
 scanf("%f",&p);
 printf("Enter annual interest rate");
 scanf("%f",&r);
 printf("Enter number of months");
 scanf("%d",&n);
 
 temp = r/(12*100);
 emi = p * temp * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI = %0.4f",emi);

 return 0;
}

