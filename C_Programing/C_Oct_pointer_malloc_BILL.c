/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
#include<malloc.h>
/* global variable declaration */
int main()
{
 int i,n,*qty;
 float *price,*amount,Bill=0;
 
  printf("\n How many itmes u purchased?");
 scanf("%d",&n);
 qty=(int *)malloc(n * sizeof(int));
 price=(float *)malloc(n * sizeof(float));
 amount=(float *)malloc(n * sizeof(float));
 for(i=0;i<n;i++)
 {
 printf("\n enter quantity=");
 scanf("%d",(qty+i));
 printf("enter price");
 scanf("%f",(price+i));
 *(amount+i)= *(price+i)*(*(qty+i)); /*  amount[i]=price[i]*qty[i]*/
  Bill+=*(amount+i);               /* Bill+=*(amount+i)   Bill+=amount[i]*/
 }
 printf("\n item   quantity   price    amount  ");
 for(i=0;i<n;i++)
 {
 printf("\n %4d %4d %13.3f %5.3f", (i+1),*(qty+i),*(price+i),*(amount+i));
 }
 printf("\nThe complete bill is= %f",Bill);
 
  return 0;
 }





