#include<stdio.h>
int main()
{
   int A,B,C;
   scanf("%d %d %d",&A,&B,&C);
   if(A==B)
   printf("C\n");
   else
   if(A==C)
   printf("B\n");
   else
   printf("A\n");
  
   return 0;
  
}