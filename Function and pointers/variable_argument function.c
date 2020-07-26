//variable arg fuction
#include<stdarg.h>
#include<stdio.h>

void display(int ctr,...)
{	int val;
	va_list list;
	va_start(list,ctr);
	for(int i=1;i<ctr;i++)
	{
		val=va_arg(list,int);
		printf("val %d:%d \n",i,val);

	}

}

int main()
{ 	display(4,1,4,3,5);
}