/* Thisstructure medicine details Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
typedef struct 
{
int day,month,year;
}date;

typedef struct 
{
char madename[20] ;
int price;
date mdate;
date exdate;
}med;


int main()
{
     med e1={"OmeeD",123,19,8,1997,20,3,2000};
	 printf(" Mediceine details are\n");
	 puts(e1.madename);
	 printf("Price of medicine = Rs. %d",e1.price);
	 printf("\nManufacturing date is %d /%d /%d\n",e1.mdate.day,e1.mdate.month,e1.mdate.year);
	 printf("\nExpiry date is %d /%d /%d\n",e1.exdate.day,e1.exdate.month,e1.exdate.year);
}	  

