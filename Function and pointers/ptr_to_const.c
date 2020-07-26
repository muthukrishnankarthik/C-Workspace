#include<stdio.h>


int main()
{
const int val=10;
int *ptr=&val;
*ptr=9;
printf("%d\n",val );
	
}