#include<stdio.h>
/*
Size of Enum depends on the value stored inside the enum
*/
int main()
{ 
	
	enum s{
		a=0xff,
		b=0xf,
		c=0xffffffffffffff
	};
	enum s var;
	var=a;

	printf("Size is : %ld,\n", sizeof(var));
}