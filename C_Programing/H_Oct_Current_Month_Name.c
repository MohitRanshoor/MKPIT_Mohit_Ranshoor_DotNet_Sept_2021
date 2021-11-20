/* This is my fifth Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
int i;
printf("\n Enter number of current month \n");
scanf("%d",&i);
switch(i)
{
case 1: printf("\n It's January");
break;
case 2: printf("\n It's February");
break;
case 3: printf("\n It's March");
break;
case 4: printf("\n It's April");
break;
case 5: printf("\n It's May");
break;
case 6: printf("\n It's June");
break;
case 7: printf("\n It's July");
break;
case 8: printf("\n It's August");
break;
case 9: printf("\n It's September");
break;
case 10: printf("\n It's Octomber");
break;
case 11: printf("\n It's Noverber");
break;
case 12: printf("\n It's December");
break;
default: printf("\ Your selection is invalid please press valid Month Number");
}
return 0;
}

