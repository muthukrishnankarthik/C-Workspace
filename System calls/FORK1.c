#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>



int main()
{
    pid_t ret;
    ret = fork();
    printf("ret = %d \n",ret );
    if(ret==0)
    {
        sleep(10);
        printf("i am child process id : %u , parent id : %u\n",getpid(),getppid());
    }
    else
    {
        printf("child process id : %u ,i am parent process id: %u\n",getpid(),getppid());
    }
}