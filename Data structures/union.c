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
   t1.c='a';
   printf("%d\n",t1.i); //prints ascii value of 'a'
   
   t1.i=112; // ascii value of 'p'
   printf("%c",t1.c);
    return 0;
}
