#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
   int *ptr;
   ptr = (int *)malloc(sizeof(int)*5); 
   int i; 
   int *ptr_new; 

     
   *ptr = 10;  
   *(ptr + 1) = 20; 
   //*(ptr+2)=30;
   //*(ptr+3)=25;
     
//   ptr_new = (int *)realloc(ptr, sizeof(int)*4); 
  // *(ptr_new + 2) = 30; 
   // *(ptr_new + 3) = 40; 
   //for(i = 0; i < 4; i++) 
     //  printf("%d ", *(ptr_new + i)); 

   printf("\n size of ptr is %ld: \n",sizeof(i));
   for(i=0;i<5;i++)
      printf("%p \n",(ptr+i));
   //free(++ptr_new);
  
   getchar(); 
   return 0; 
} 