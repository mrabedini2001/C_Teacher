// do while in c
#include<stdio.h>
 
int main ()
{
   /* local variable Initialization */   int n = 1,times=5;

   /* do loops execution */   do
   {
       printf("C do while loops: %d\n", n);
       n = n + 1;
   }while( n <= times );
 
   return 0;
}