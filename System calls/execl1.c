// to execute command from the program by accepting from the user

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{	char cmd[100],path[100]="/bin/";
	pid_t ret;
printf("Enter the command ");scanf("%s",cmd);
strcat(path,cmd); 
	ret=fork();
if(ret==0)
 { 
printf("\nThis is child process\n");
execl(path,cmd,NULL);
printf("I am child PID %u Parent ID: %u \n",getpid(),getppid());
	}
else{
	wait(NULL);
printf("\nThis is parent process\n");
printf("I am parent PID: %u, Parent ID: %u \n",getpid(),getppid());
printf("\nreturn value address of child is : %u \n",ret);
 }
return 0;
}