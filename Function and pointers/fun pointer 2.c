#include<stdio.h>

int (*fun)(); //observe the function declaration
int sum(int a ,int b) // observe  arguments
{
	
 return (a+b);
}

int main()
{ int x,y;

printf("Enter two numbers \n");
	scanf("%d %d",&x,&y);
	
	fun=sum;
	printf("The sum of two numbers is %d",fun(x,y));
}