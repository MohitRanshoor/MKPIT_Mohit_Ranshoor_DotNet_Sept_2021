/* This is Input 0 and 1 in array Program */
/* pre processor directive */
#include<stdio.h>
/* global variable declaration */
int main()
{
 char Name[10];
 int i,vovels=0;
 printf("Enter your name\n");
 for(i=0;i<6;i++)
   {
    Name[i]=getchar();
   }
   for(i=0;i<10;i++)
   {
   printf("%c",Name[i]);
   if(Name[i]=='a' || Name[i]=='A' || Name[i]=='E' || Name[i]=='e' || Name[i]=='I' || Name[i]=='i' || Name[i]=='O' || Name[i]=='o' || Name[i]=='U' || Name[i]=='u' )
      vovels++; 
   }
   printf("\nThere are %d vovles in my name",vovels);
   
 return 0;
}

