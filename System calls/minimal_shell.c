// Implementation of minimal shell

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{	char cmd[100],path[100]="/bin/";
	pid_t ret;
while(1)
	{	
		printf("Enter the command ");scanf("%s",cmd);
		//strcat(path,cmd); 
		ret=fork();
		if(ret==0)
 		{ 
			printf("\nThis is child process\n");
			printf("I am child PID %u Parent ID: %u \n",getpid(),getppid());
			execl(path,cmd,NULL);

		}

		else {
				wait(NULL);
				printf("\nThis is parent process\n");
				printf("I am parent PID: %u, Parent ID: %u \n",getpid(),getppid());
				printf("\nreturn value address of child is : %u \n",ret);
 				}

 				//strcpy(cmd,' ');
				strcpy(path,"/bin/");
 	}
	
	return 0;
}