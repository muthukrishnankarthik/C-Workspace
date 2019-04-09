#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t ret;

	ret=fork();
if(ret==0)
 { 
printf("\nThis is child process\n");
execl("/bin/date","date",NULL);
	}
else{
printf("\nThis is parent process\n");
printf("\nreturn value address of child is : %u \n",ret);
 }
return 0;
}
