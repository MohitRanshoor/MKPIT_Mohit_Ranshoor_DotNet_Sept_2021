	#include<stdio.h>
	int main()
	{
	int i;
	printf("\n Enter number of current Week \n");
	scanf("%d",&i);
	switch(i)
	{
	case 1: printf("\n It's Monday");
	break;
	case 2: printf("\n It's Tuesday");
	break;
	case 3: printf("\n It's Wednesday");
	break;
	case 4: printf("\n It's Thrusday");
	break;
	case 5: printf("\n It's Fiday");
	break;
	case 6: printf("\n It's Saturday");
	break;
	case 7: printf("\n It's Sunday");
	break;

default: printf("\ Your selection is invalid please press valid Month Number");
}
		return 0;

