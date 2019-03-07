#include<stdio.h>
#include<stdlib.h>
int main()
{
pid_t ret,r;

ret=fork();

if(ret==0)
{
	execl("/home/mtech/Desktop/Karthik\ Raghavan/System\ call/child",NULL);
}
if(ret!=0) printf("hello world");
return 0;
}
