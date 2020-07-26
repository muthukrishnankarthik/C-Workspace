#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   printf("original: %u \n",a); 
   x[0] = 1; 
   printf("after x[0]=1 :%d \n",a); 
   x[1] = 2; 

   printf("After x[1]=2 %d \n",a);   
   return 0; 
}