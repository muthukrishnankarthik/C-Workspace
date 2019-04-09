//ptr pass by ref1

#include<stdio.h>


void fun(int *b)
{
*b+=3;

}

void main()
{
	int c=4, *b, **a;

	b=&c;
	(*b)++;
	printf("c %d\n *b %d \n",c,*b );

	fun(b);
	printf("After function \nc %d\n *b %d \n",c,*b );


}