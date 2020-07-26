#include<stdio.h>
#include<string.h>
int main()
{
	__uint8_t t;
	char str[2]="ff";
	sscanf(str,"%*d",&t);
	printf("%x \n",t );
}
