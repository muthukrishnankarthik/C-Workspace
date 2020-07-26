/*
Practical implementation of union: union represent a different view of the data stored
*/
#include <stdio.h>

int main()
{
   union t{
       char c;
       int i;
   };
   union t t1;
   t1.c='d';
   printf("%d\n",t1.i); //prints ascii value of 'a'
   
   t1.i=6500; // reads first byte of 6500 in Hex is(1964), 64's dec equ is 100 ='d'
   printf("%c",t1.c);
    return 0;
}
