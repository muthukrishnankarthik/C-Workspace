#include<stdio.h>
#include<stdlib.h>

int main()
{
	pid_t ret;
	int sta;

ret=fork();
if(ret==0)
{	
	printf("I am child PID %u Parent ID: %u \n",getpid(),getppid());
	//sleep(5);

	}

else
{
	wait(NULL);
	printf("I am parent PID: %u, Parent ID: %u \n",getpid(),getppid());

	printf("Value of sta : %d",sta);
	

}

return 0;
}