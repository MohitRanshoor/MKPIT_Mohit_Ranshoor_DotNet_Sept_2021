 #include <stdio.h>
 
 
 
 int main()
 {
 int sec, hr , min;
 
 printf("Enter the value in second");
 scanf("%d",&sec);
 hr=sec/60*60;
   printf("%d",hr);
 
  printf("Enter the value in min");
  scanf("%d",&min);
  sec=min*60;
  
 

 
  printf("%d",sec); 
 return 0;
 }

