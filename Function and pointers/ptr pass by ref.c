
//observe the output of x in the print statement and find the output value that is returned by the function.

#include<stdio.h>
#include<stdlib.h>
//sample.c

int f(int x, int *py, int **ppz)
{
int y, z;
**ppz += 1;
printf("ppz %d\n",**ppz );

z = **ppz;
printf("z %d\n",z );

*py += 2;printf("py %d\n",*py);

y = *py;
printf("y %d\n",y);
printf("x before increment %d\n",x );
x += 3; // c passed only by value therefore c will be same as the passed value

printf("x %d\n",x );

return x + y + z;
}
void main()
{
int c, *b, **a;
c = 4;
b = &c;
a = &b;
printf( "%d", f(c,b,a)); // c passed only by value 
getchar();
}