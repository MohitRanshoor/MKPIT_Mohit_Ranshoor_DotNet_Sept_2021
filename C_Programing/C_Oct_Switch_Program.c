/* This is my fifth Program */
/* pre processor directive */
#include<stdio.h>

/* global variable declaration */
int main()
{
char color ;
printf("\n Enter your favourite color from rainbow by selection any charater VIBGYOR \n");
color=getchar();
switch(color)
{
case 'V':
case 'v': printf("\n your fav color is Voilet");
break;
case 'B':
case 'b': printf("\n your fav color is Blue");
break;
case 'G':
case 'g': printf("\n your fav color is Green");
break;
case 'Y':
case 'y': printf("\n your fav color is Yellow");
break;
case 'O':
case 'o': printf("\n your fav color is Orange");
break;
case 'R':
case 'r': printf("\n your fav color is Red");
break;
default: printf("\ Your selection is invalid please press valid key");
}
return 0;
}

