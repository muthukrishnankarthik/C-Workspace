#include<stdio.h>
int func(volatile int *p)
{
 return *p**p;
}
int main()
{
	int a=2;
	volatile int *ptr=&a;
	int ret=func(ptr);
	printf("%d",ret);
}