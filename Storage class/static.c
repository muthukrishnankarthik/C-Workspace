//static.c
#include<stdio.h>
// 
int a, b, c = 0;
void prtFun (void);
int main ()
{	// static variable in main is specific to main function and the value is retained and not 
	// altered by the other function.
static int a = 1; /* line 1 */
prtFun();
a += 1;
printf("\nAfter increment in main %d\n",a );
prtFun();
printf ( "\n %d %d " , a, b) ;
}
void prtFun (void) // the static variable declared within the function is independent and  particular to the function
					// and value is retained and not reinitialized everytime the function is. 
{
static int a = 2; /* line 2 */

int b = 1;
printf ( "\n inside Prt function %d %d " , a, b) ;
a += ++b;
printf (" \n %d %d  \n exits function" , a, b);
}